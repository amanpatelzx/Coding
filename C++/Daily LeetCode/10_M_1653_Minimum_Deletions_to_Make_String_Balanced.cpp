class Solution {
public:
    vector<vector<int>> dp;
    int f(string &s , int i , int check){
        if(i == s.size()) return 0;
        if(dp[i][check] != -1) return dp[i][check];
        if(check == 0){
            if(s[i] == 'b') return dp[i][check] = min(1 + f(s , i+1 , check) , f(s , i+1 , 1));
            else return dp[i][check] = f(s , i+1 , check);
        }
        if(check == 1){
            if(s[i] == 'a') return dp[i][1] = 1 + f(s , i + 1 , check);
            else return dp[i][check] = f(s , i+1, check);
        }
        return dp[i][check];
    }
    int minimumDeletions(string s) {
        dp.resize(s.size()+2 , vector<int>(2 , -1));
        return f(s , 0, 0);
    }
};