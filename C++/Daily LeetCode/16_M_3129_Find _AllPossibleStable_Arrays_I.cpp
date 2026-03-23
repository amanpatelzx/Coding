class Solution {//https://leetcode.com/problems/find-all-possible-stable-binary-arrays-i/?envType=daily-question&envId=2026-03-10
public:
    int M = 1e9+7;
    int dp[201][201][2];
    int f(int &zero , int &one , int &limit, int z, int o, bool check){
        if(z == zero && o == one) return 1;
        if(dp[z][o][check] != -1) return dp[z][o][check];
        int result = 0;
        
        if(check){
            for(int i = 1; i <= min(limit ,zero - z); i++){
                result = (result + f(zero , one ,limit ,z + i, o , false)) % M;
            }
        }
        else{
            for(int i = 1; i <= min(limit, one - o); i++){
                result = (result + f(zero , one ,limit ,z, o + i , true)) % M;
            }
        }

        return dp[z][o][check] = result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp , -1, sizeof(dp));
        int a = f(zero , one , limit, 0 , 0 , true);
        int b = f(zero , one , limit, 0 , 0 , false);
        return (a+b) % M;
    }
};