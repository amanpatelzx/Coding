const boardElement = document.getElementById('board');
const statusElement = document.getElementById('status');
const whiteTimerElement = document.getElementById('white-timer');
const blackTimerElement = document.getElementById('black-timer');
const resetBtn = document.getElementById('reset-btn');
const modeInputs = document.querySelectorAll('input[name="mode"]');

let board = [];
let currentPlayer = 'white';
let selectedSquare = null;
let possibleMoves = [];
let gameOver = false;
let whiteTime = 600; // 10 minutes in seconds
let blackTime = 600;
let timerInterval;
let gameMode = 'human'; // 'human' or 'computer'

// Castling rights
let castlingRights = {
    white: { kingSide: true, queenSide: true },
    black: { kingSide: true, queenSide: true }
};

// Stockfish engine
let stockfish = null;
let stockfishReady = false;

// Piece Unicode symbols
const pieces = {
    'white': {
        'king': '♔',
        'queen': '♕',
        'rook': '♖',
        'bishop': '♗',
        'knight': '♘',
        'pawn': '♙'
    },
    'black': {
        'king': '♚',
        'queen': '♛',
        'rook': '♜',
        'bishop': '♝',
        'knight': '♞',
        'pawn': '♟'
    }
};

// Initialize the board
function initBoard() {
    board = [
        ['♜', '♞', '♝', '♛', '♚', '♝', '♞', '♜'],
        ['♟', '♟', '♟', '♟', '♟', '♟', '♟', '♟'],
        ['', '', '', '', '', '', '', ''],
        ['', '', '', '', '', '', '', ''],
        ['', '', '', '', '', '', '', ''],
        ['', '', '', '', '', '', '', ''],
        ['♙', '♙', '♙', '♙', '♙', '♙', '♙', '♙'],
        ['♖', '♘', '♗', '♕', '♔', '♗', '♘', '♖']
    ];
}

// Render the board
function renderBoard() {
    boardElement.innerHTML = '';
    for (let row = 0; row < 8; row++) {
        for (let col = 0; col < 8; col++) {
            const square = document.createElement('div');
            square.className = 'square ' + ((row + col) % 2 === 0 ? 'light' : 'dark');
            square.dataset.row = row;
            square.dataset.col = col;
            square.textContent = board[row][col];
            square.addEventListener('click', () => handleSquareClick(row, col));
            boardElement.appendChild(square);
        }
    }
}

// Handle square click
function handleSquareClick(row, col) {
    if (gameOver) return;

    const piece = board[row][col];
    const isWhitePiece = piece && '♔♕♖♗♘♙'.includes(piece);
    const isBlackPiece = piece && '♚♛♜♝♞♟'.includes(piece);

    if (selectedSquare) {
        const [selectedRow, selectedCol] = selectedSquare;
        if (selectedRow === row && selectedCol === col) {
            // Deselect
            clearHighlights();
            selectedSquare = null;
            possibleMoves = [];
        } else if (possibleMoves.some(([r, c]) => r === row && c === col)) {
            // Make move
            makeMove(selectedRow, selectedCol, row, col);
        } else if ((currentPlayer === 'white' && isWhitePiece) || (currentPlayer === 'black' && isBlackPiece)) {
            // Select new piece
            selectPiece(row, col);
        }
    } else if ((currentPlayer === 'white' && isWhitePiece) || (currentPlayer === 'black' && isBlackPiece)) {
        // Select piece
        selectPiece(row, col);
    }
}

// Select a piece and show possible moves
function selectPiece(row, col) {
    clearHighlights();
    selectedSquare = [row, col];
    possibleMoves = getPossibleMoves(row, col);
    highlightSquare(row, col, 'selected');
    possibleMoves.forEach(([r, c]) => highlightSquare(r, c, 'possible-move'));
}

// Clear all highlights
function clearHighlights() {
    document.querySelectorAll('.selected, .possible-move').forEach(square => {
        square.classList.remove('selected', 'possible-move');
    });
}

// Highlight a square
function highlightSquare(row, col, className) {
    const square = document.querySelector(`[data-row="${row}"][data-col="${col}"]`);
    if (square) square.classList.add(className);
}

// Get possible moves for a piece
function getPossibleMoves(row, col) {
    const piece = board[row][col];
    if (!piece) return [];

    const moves = [];
    const color = '♔♕♖♗♘♙'.includes(piece) ? 'white' : 'black';

    // Basic move logic (simplified)
    if (piece === '♙' || piece === '♟') {
        // Pawn moves
        const direction = piece === '♙' ? -1 : 1;
        const startRow = piece === '♙' ? 6 : 1;

        // Forward move
        if (row + direction >= 0 && row + direction < 8 && !board[row + direction][col]) {
            moves.push([row + direction, col]);
            // Double move from start
            if (row === startRow && !board[row + 2 * direction][col]) {
                moves.push([row + 2 * direction, col]);
            }
        }

        // Captures
        for (let dc = -1; dc <= 1; dc += 2) {
            const newCol = col + dc;
            if (newCol >= 0 && newCol < 8 && row + direction >= 0 && row + direction < 8) {
                const target = board[row + direction][newCol];
                if (target && (color === 'white' ? '♚♛♜♝♞♟'.includes(target) : '♔♕♖♗♘♙'.includes(target))) {
                    moves.push([row + direction, newCol]);
                }
            }
        }
    } else if (piece === '♖' || piece === '♜') {
        // Rook moves
        const directions = [[0, 1], [0, -1], [1, 0], [-1, 0]];
        directions.forEach(([dr, dc]) => {
            for (let i = 1; i < 8; i++) {
                const r = row + dr * i;
                const c = col + dc * i;
                if (r < 0 || r >= 8 || c < 0 || c >= 8) break;
                const target = board[r][c];
                if (target) {
                    if ((color === 'white' && '♚♛♜♝♞♟'.includes(target)) || (color === 'black' && '♔♕♖♗♘♙'.includes(target))) {
                        moves.push([r, c]);
                    }
                    break;
                }
                moves.push([r, c]);
            }
        });
    } else if (piece === '♗' || piece === '♝') {
        // Bishop moves
        const directions = [[1, 1], [1, -1], [-1, 1], [-1, -1]];
        directions.forEach(([dr, dc]) => {
            for (let i = 1; i < 8; i++) {
                const r = row + dr * i;
                const c = col + dc * i;
                if (r < 0 || r >= 8 || c < 0 || c >= 8) break;
                const target = board[r][c];
                if (target) {
                    if ((color === 'white' && '♚♛♜♝♞♟'.includes(target)) || (color === 'black' && '♔♕♖♗♘♙'.includes(target))) {
                        moves.push([r, c]);
                    }
                    break;
                }
                moves.push([r, c]);
            }
        });
    } else if (piece === '♕' || piece === '♛') {
        // Queen moves (rook + bishop)
        const directions = [[0, 1], [0, -1], [1, 0], [-1, 0], [1, 1], [1, -1], [-1, 1], [-1, -1]];
        directions.forEach(([dr, dc]) => {
            for (let i = 1; i < 8; i++) {
                const r = row + dr * i;
                const c = col + dc * i;
                if (r < 0 || r >= 8 || c < 0 || c >= 8) break;
                const target = board[r][c];
                if (target) {
                    if ((color === 'white' && '♚♛♜♝♞♟'.includes(target)) || (color === 'black' && '♔♕♖♗♘♙'.includes(target))) {
                        moves.push([r, c]);
                    }
                    break;
                }
                moves.push([r, c]);
            }
        });
    } else if (piece === '♘' || piece === '♞') {
        // Knight moves
        const knightMoves = [[-2, -1], [-2, 1], [-1, -2], [-1, 2], [1, -2], [1, 2], [2, -1], [2, 1]];
        knightMoves.forEach(([dr, dc]) => {
            const r = row + dr;
            const c = col + dc;
            if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                const target = board[r][c];
                if (!target || (color === 'white' && '♚♛♜♝♞♟'.includes(target)) || (color === 'black' && '♔♕♖♗♘♙'.includes(target))) {
                    moves.push([r, c]);
                }
            }
        });
    } else if (piece === '♔' || piece === '♚') {
        // King moves
        const kingMoves = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]];
        kingMoves.forEach(([dr, dc]) => {
            const r = row + dr;
            const c = col + dc;
            if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                const target = board[r][c];
                if (!target || (color === 'white' ? '♚♛♜♝♞♟'.includes(target) : '♔♕♖♗♘♙'.includes(target))) {
                    moves.push([r, c]);
                }
            }
        });

        // Castling
        if (color === 'white' && row === 7 && col === 4) {
            // King side castling (white)
            if (castlingRights.white.kingSide &&
                !board[7][5] && !board[7][6] && // Empty squares
                board[7][7] === '♖') { // Rook in place

                // Check if king is in check
                const opponent = 'black';
                if (!isSquareAttacked(7, 4, opponent) &&
                    !isSquareAttacked(7, 5, opponent) &&
                    !isSquareAttacked(7, 6, opponent)) {
                    moves.push([7, 6]); // King moves to g1
                }
            }

            // Queen side castling (white)
            if (castlingRights.white.queenSide &&
                !board[7][1] && !board[7][2] && !board[7][3] && // Empty squares
                board[7][0] === '♖') { // Rook in place

                // Check if king is in check
                const opponent = 'black';
                if (!isSquareAttacked(7, 4, opponent) &&
                    !isSquareAttacked(7, 3, opponent) &&
                    !isSquareAttacked(7, 2, opponent)) {
                    moves.push([7, 2]); // King moves to c1
                }
            }
        } else if (color === 'black' && row === 0 && col === 4) {
            // King side castling (black)
            if (castlingRights.black.kingSide &&
                !board[0][5] && !board[0][6] && // Empty squares
                board[0][7] === '♜') { // Rook in place

                // Check if king is in check
                const opponent = 'white';
                if (!isSquareAttacked(0, 4, opponent) &&
                    !isSquareAttacked(0, 5, opponent) &&
                    !isSquareAttacked(0, 6, opponent)) {
                    moves.push([0, 6]); // King moves to g8
                }
            }

            // Queen side castling (black)
            if (castlingRights.black.queenSide &&
                !board[0][1] && !board[0][2] && !board[0][3] && // Empty squares
                board[0][0] === '♜') { // Rook in place

                // Check if king is in check
                const opponent = 'white';
                if (!isSquareAttacked(0, 4, opponent) &&
                    !isSquareAttacked(0, 3, opponent) &&
                    !isSquareAttacked(0, 2, opponent)) {
                    moves.push([0, 2]); // King moves to c8
                }
            }
        }
    }

    return moves;
}

// Make a move
function makeMove(fromRow, fromCol, toRow, toCol) {
    const piece = board[fromRow][fromCol];

    // Handle castling
    if (piece === '♔' && fromRow === 7 && fromCol === 4 && toRow === 7 && toCol === 6) {
        // White king side castling
        board[7][6] = '♔';
        board[7][5] = '♖';
        board[7][4] = '';
        board[7][7] = '';
        castlingRights.white.kingSide = false;
        castlingRights.white.queenSide = false;
    } else if (piece === '♔' && fromRow === 7 && fromCol === 4 && toRow === 7 && toCol === 2) {
        // White queen side castling
        board[7][2] = '♔';
        board[7][3] = '♖';
        board[7][4] = '';
        board[7][0] = '';
        castlingRights.white.kingSide = false;
        castlingRights.white.queenSide = false;
    } else if (piece === '♚' && fromRow === 0 && fromCol === 4 && toRow === 0 && toCol === 6) {
        // Black king side castling
        board[0][6] = '♚';
        board[0][5] = '♜';
        board[0][4] = '';
        board[0][7] = '';
        castlingRights.black.kingSide = false;
        castlingRights.black.queenSide = false;
    } else if (piece === '♚' && fromRow === 0 && fromCol === 4 && toRow === 0 && toCol === 2) {
        // Black queen side castling
        board[0][2] = '♚';
        board[0][3] = '♜';
        board[0][4] = '';
        board[0][0] = '';
        castlingRights.black.kingSide = false;
        castlingRights.black.queenSide = false;
    } else {
        // Normal move
        board[toRow][toCol] = board[fromRow][fromCol];
        board[fromRow][fromCol] = '';

        // Update castling rights
        if (piece === '♔') {
            castlingRights.white.kingSide = false;
            castlingRights.white.queenSide = false;
        } else if (piece === '♚') {
            castlingRights.black.kingSide = false;
            castlingRights.black.queenSide = false;
        } else if (piece === '♖' && fromRow === 7 && fromCol === 0) {
            castlingRights.white.queenSide = false;
        } else if (piece === '♖' && fromRow === 7 && fromCol === 7) {
            castlingRights.white.kingSide = false;
        } else if (piece === '♜' && fromRow === 0 && fromCol === 0) {
            castlingRights.black.queenSide = false;
        } else if (piece === '♜' && fromRow === 0 && fromCol === 7) {
            castlingRights.black.kingSide = false;
        }
    }

    // Check for pawn promotion
    if ((board[toRow][toCol] === '♙' && toRow === 0) || (board[toRow][toCol] === '♟' && toRow === 7)) {
        board[toRow][toCol] = board[toRow][toCol] === '♙' ? '♕' : '♛';
    }

    clearHighlights();
    selectedSquare = null;
    possibleMoves = [];

    // Check for checkmate
    if (isCheckmate()) {
        gameOver = true;
        statusElement.textContent = `${currentPlayer === 'white' ? 'Black' : 'White'} wins by checkmate!`;
        clearInterval(timerInterval);
        return;
    }

    // Switch player
    currentPlayer = currentPlayer === 'white' ? 'black' : 'white';
    statusElement.textContent = `${currentPlayer.charAt(0).toUpperCase() + currentPlayer.slice(1)}'s turn`;

    renderBoard();

    // If playing vs computer and it's computer's turn, make computer move
    if (gameMode === 'computer' && currentPlayer === 'black' && !gameOver) {
        setTimeout(makeComputerMove, 500); // Delay for better UX
    }
}

// Check if current player is in checkmate
function isCheckmate() {
    const opponent = currentPlayer === 'white' ? 'black' : 'white';
    const kingPos = findKing(currentPlayer);

    if (!kingPos) return false;

    // Check if king is in check
    if (!isSquareAttacked(kingPos[0], kingPos[1], opponent)) return false;

    // Check if any move can get out of check
    for (let row = 0; row < 8; row++) {
        for (let col = 0; col < 8; col++) {
            const piece = board[row][col];
            if (piece && (currentPlayer === 'white' ? '♔♕♖♗♘♙'.includes(piece) : '♚♛♜♝♞♟'.includes(piece))) {
                const moves = getPossibleMoves(row, col);
                for (const [toRow, toCol] of moves) {
                    // Simulate move
                    const originalPiece = board[toRow][toCol];
                    board[toRow][toCol] = board[row][col];
                    board[row][col] = '';

                    const stillInCheck = isSquareAttacked(kingPos[0], kingPos[1], opponent);

                    // Undo move
                    board[row][col] = board[toRow][toCol];
                    board[toRow][toCol] = originalPiece;

                    if (!stillInCheck) return false;
                }
            }
        }
    }

    return true;
}

// Find king position
function findKing(color) {
    const king = color === 'white' ? '♔' : '♚';
    for (let row = 0; row < 8; row++) {
        for (let col = 0; col < 8; col++) {
            if (board[row][col] === king) return [row, col];
        }
    }
    return null;
}

// Check if a square is attacked by opponent
function isSquareAttacked(row, col, attackerColor) {
    for (let r = 0; r < 8; r++) {
        for (let c = 0; c < 8; c++) {
            const piece = board[r][c];
            if (piece && (attackerColor === 'white' ? '♔♕♖♗♘♙'.includes(piece) : '♚♛♜♝♞♟'.includes(piece))) {
                const moves = getPossibleMoves(r, c);
                if (moves.some(([mr, mc]) => mr === row && mc === col)) return true;
            }
        }
    }
    return false;
}

// Timer functions
function startTimer() {
    timerInterval = setInterval(() => {
        if (currentPlayer === 'white') {
            whiteTime--;
            updateTimerDisplay();
            if (whiteTime <= 0) {
                gameOver = true;
                statusElement.textContent = 'Black wins by timeout!';
                clearInterval(timerInterval);
            }
        } else {
            blackTime--;
            updateTimerDisplay();
            if (blackTime <= 0) {
                gameOver = true;
                statusElement.textContent = 'White wins by timeout!';
                clearInterval(timerInterval);
            }
        }
    }, 1000);
}

function updateTimerDisplay() {
    whiteTimerElement.textContent = `White: ${formatTime(whiteTime)}`;
    blackTimerElement.textContent = `Black: ${formatTime(blackTime)}`;
}

function formatTime(seconds) {
    const mins = Math.floor(seconds / 60);
    const secs = seconds % 60;
    return `${mins.toString().padStart(2, '0')}:${secs.toString().padStart(2, '0')}`;
}

// Reset game
function resetGame() {
    clearInterval(timerInterval);
    initBoard();
    currentPlayer = 'white';
    selectedSquare = null;
    possibleMoves = [];
    gameOver = false;
    whiteTime = 600;
    blackTime = 600;
    statusElement.textContent = "White's turn";
    updateTimerDisplay();
    renderBoard();
    startTimer();
}

modeInputs.forEach(input => {
    input.addEventListener('change', (e) => {
        gameMode = e.target.value;
        resetGame();
    });
});

// Initialize Stockfish
function initStockfish() {
    if (typeof STOCKFISH !== 'undefined') {
        stockfish = new STOCKFISH();
        stockfish.postMessage('uci');
        stockfish.postMessage('isready');

        stockfish.onmessage = function(event) {
            const message = event.data || event;
            if (message === 'readyok') {
                stockfishReady = true;
                console.log('Stockfish is ready!');
            }
        };
    } else {
        console.log('Stockfish not loaded, using simple AI');
    }
}

// Computer AI functions
function makeComputerMove() {
    if (gameOver) return;

    if (stockfishReady && stockfish) {
        // Use Stockfish
        makeStockfishMove();
    } else {
        // Use simple AI
        const allMoves = getAllPossibleMoves('black');
        if (allMoves.length === 0) return;

        // Simple AI: evaluate moves and pick the best one
        let bestMove = null;
        let bestScore = -Infinity;

        for (const move of allMoves) {
            const score = evaluateMove(move);
            if (score > bestScore) {
                bestScore = score;
                bestMove = move;
            }
        }

        if (bestMove) {
            makeMove(bestMove.fromRow, bestMove.fromCol, bestMove.toRow, bestMove.toCol);
        }
    }
}

function makeStockfishMove() {
    const fen = boardToFEN();
    stockfish.postMessage('position fen ' + fen);
    stockfish.postMessage('go movetime 1000'); // Think for 1 second

    stockfish.onmessage = function(event) {
        const message = event.data || event;
        if (message.startsWith('bestmove')) {
            const moveStr = message.split(' ')[1];
            if (moveStr && moveStr !== '(none)') {
                const move = parseStockfishMove(moveStr);
                if (move) {
                    makeMove(move.fromRow, move.fromCol, move.toRow, move.toCol);
                }
            }
        }
    };
}

function boardToFEN() {
    let fen = '';

    for (let row = 0; row < 8; row++) {
        let emptyCount = 0;
        for (let col = 0; col < 8; col++) {
            const piece = board[row][col];
            if (piece === '') {
                emptyCount++;
            } else {
                if (emptyCount > 0) {
                    fen += emptyCount;
                    emptyCount = 0;
                }
                fen += pieceToFEN(piece);
            }
        }
        if (emptyCount > 0) {
            fen += emptyCount;
        }
        if (row < 7) fen += '/';
    }

    // Add current player
    fen += ' ' + (currentPlayer === 'white' ? 'w' : 'b');

    // Add castling rights
    let castling = '';
    if (castlingRights.white.kingSide) castling += 'K';
    if (castlingRights.white.queenSide) castling += 'Q';
    if (castlingRights.black.kingSide) castling += 'k';
    if (castlingRights.black.queenSide) castling += 'q';
    fen += ' ' + (castling || '-');

    // Add en passant and move counters (simplified)
    fen += ' - 0 1';

    return fen;
}

function pieceToFEN(piece) {
    const fenMap = {
        '♔': 'K', '♕': 'Q', '♖': 'R', '♗': 'B', '♘': 'N', '♙': 'P',
        '♚': 'k', '♛': 'q', '♜': 'r', '♝': 'b', '♞': 'n', '♟': 'p'
    };
    return fenMap[piece] || '';
}

function parseStockfishMove(moveStr) {
    if (moveStr.length < 4) return null;

    const fromCol = moveStr.charCodeAt(0) - 'a'.charCodeAt(0);
    const fromRow = 8 - parseInt(moveStr[1]);
    const toCol = moveStr.charCodeAt(2) - 'a'.charCodeAt(0);
    const toRow = 8 - parseInt(moveStr[3]);

    // Handle promotion
    if (moveStr.length === 5) {
        // For now, ignore promotion details
    }

    return {
        fromRow: fromRow,
        fromCol: fromCol,
        toRow: toRow,
        toCol: toCol
    };
}

function getAllPossibleMoves(color) {
    const moves = [];
    for (let row = 0; row < 8; row++) {
        for (let col = 0; col < 8; col++) {
            const piece = board[row][col];
            if (piece && (color === 'white' ? '♔♕♖♗♘♙'.includes(piece) : '♚♛♜♝♞♟'.includes(piece))) {
                const pieceMoves = getPossibleMoves(row, col);
                for (const [toRow, toCol] of pieceMoves) {
                    moves.push({
                        fromRow: row,
                        fromCol: col,
                        toRow: toRow,
                        toCol: toCol,
                        piece: piece,
                        captured: board[toRow][toCol]
                    });
                }
            }
        }
    }
    return moves;
}

function evaluateMove(move) {
    let score = 0;

    // Simulate the move
    const originalPiece = board[move.toRow][move.toCol];
    board[move.toRow][move.toCol] = board[move.fromRow][move.fromCol];
    board[move.fromRow][move.fromCol] = '';

    // Material advantage
    if (move.captured) {
        score += getPieceValue(move.captured);
    }

    // Check if move puts opponent in check
    const opponent = currentPlayer === 'white' ? 'black' : 'white';
    const opponentKingPos = findKing(opponent);
    if (opponentKingPos && isSquareAttacked(opponentKingPos[0], opponentKingPos[1], currentPlayer)) {
        score += 50; // Bonus for checking
    }

    // Penalize if our king is in check after the move
    const ourKingPos = findKing(currentPlayer);
    if (ourKingPos && isSquareAttacked(ourKingPos[0], ourKingPos[1], opponent)) {
        score -= 100; // Heavy penalty for putting ourselves in check
    }

    // Undo the move
    board[move.fromRow][move.fromCol] = board[move.toRow][move.toCol];
    board[move.toRow][move.toCol] = originalPiece;

    return score;
}

function getPieceValue(piece) {
    const values = {
        '♟': 10, '♙': 10,
        '♞': 30, '♘': 30,
        '♝': 30, '♗': 30,
        '♜': 50, '♖': 50,
        '♛': 90, '♕': 90,
        '♚': 900, '♔': 900
    };
    return values[piece] || 0;
}

// Event listeners
resetBtn.addEventListener('click', resetGame);

// Initialize game
initBoard();
renderBoard();
startTimer();
initStockfish();
