#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> dp;
    int f(vector<vector<int>> &grid, int k , int row , int col){
        if(row == grid.size()-1 && col == grid[0].size()-1) return 0;
        if(dp[row][col] != -1) return dp[row][col];
        int result = INT_MAX;
        if(row+1 < grid.size()) result = min( result , grid[row+1][col] + f(grid , k , row+1 , col));
        if(col + 1 < grid[0].size()) result = min( result , grid[row][col+1] + f(grid , k , row , col+1));
        if(k > 0){
            for(int i = row ; i < grid.size(); i++){
                for(int j = 0; j < grid[0].size(); j++){
                    if(i == row && j <= col) continue;
                    if(grid[i][j] <= grid[row][col]) result = min(result , f(grid, k-1 , i , j));
                }
            }
        }
        return dp[row][col] = result;
    
    }
int main(){
        vector<vector<int>> grid = {{1,3,3},{2,5,4},{4,3,5}};
        int k =2;
        int m = grid.size();
        int n = grid[0].size();
        dp.resize(m+2 , vector<int>( n+2 , -1));
        cout<< f(grid, k , 0, 0);
}
//[[6,7,1,20,11],[4,5,18,23,28]]