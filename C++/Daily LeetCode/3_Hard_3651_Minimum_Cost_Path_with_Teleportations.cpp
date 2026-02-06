// class Solution { //this solution is giving TLE;
// public:
//     vector<vector<vector<int>>> dp;
//     int f(vector<vector<int>> &grid, int k , int row , int col){
//         if(row < 0 || col < 0 || row >=grid.size() || col >= grid[0].size()) return INT_MAX;
//         if(row == grid.size()-1 && col == grid[0].size()-1) return 0;
//         if(dp[row][col][k] != -1) return dp[row][col][k];
//         int result = INT_MAX;
//         if(row+1 < grid.size()) result = min( result , grid[row+1][col] + f(grid , k , row+1 , col));
//         if(col + 1 < grid[0].size()) result = min( result , grid[row][col+1] + f(grid , k , row , col+1));
//         if(k > 0){
//             for(int i = 0 ; i < grid.size(); i++){
//                 for(int j = 0; j < grid[0].size(); j++){
//                     // if(i == row && j <= col) continue;
//                     if(grid[i][j] <= grid[row][col]){
//                          result = min(result , f(grid, k-1 , i , j));
//                     }
//                 }
//             }
//         }
//         return dp[row][col][k] = result;
//     }
//     int minCost(vector<vector<int>>& grid, int k) {
//         int m = grid.size();
//         int n = grid[0].size();
//         dp.resize(m + 2, vector<vector<int>>(n + 2, vector<int>(k+2 , -1)));
//         return f(grid, k , 0, 0);
//     }
// };
class Solution {//think again about this solution , how its accually working
public:
    int minCost(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<pair<int, int>> points;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                points.push_back({i, j});
            }
        }
        sort(points.begin(), points.end(), [&](const pair<int,int>& a, const pair<int,int>& b) {
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        vector<vector<int>> costs(m, vector<int>(n, 1e9));

        for(int t = 0; t <= k; t++) {
            int minCost = 1e9;
            int start_idx = 0;

            for(int i = 0; i < points.size(); i++) {
                int r = points[i].first;
                int c = points[i].second;
                minCost = min(minCost, costs[r][c]);

                if(i + 1 == points.size() || grid[points[i+1].first][points[i+1].second] != grid[r][c]) {
                    for(int p = start_idx; p <= i; ++p) {
                        costs[points[p].first][points[p].second] = minCost;
                    }
                    start_idx = i + 1;
                }
            }
            for(int i = m - 1; i >= 0; i--) {
                for(int j = n - 1; j >= 0; j--) {
                    if(i == m - 1 && j == n - 1) {
                        costs[i][j] = 0;
                        continue;
                    }
                    if(i + 1 < m) costs[i][j] = min(costs[i][j], costs[i + 1][j] + grid[i + 1][j]);
                    if(j + 1 < n) costs[i][j] = min(costs[i][j], costs[i][j + 1] + grid[i][j + 1]);
                }
            }
        }
        return costs[0][0];
    }
};