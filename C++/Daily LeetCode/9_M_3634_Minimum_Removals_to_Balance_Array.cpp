class Solution {
public:
    typedef long long ll;
    // // vector<vector<int>> dp;//this is giving MLE;
    // unordered_map<int, unordered_map<int, int>> dp;//980 / 985 testcases passed && give TLE;
    // int f(vector<int> &nums , int k , int i, int j){
    //     if((ll)(nums[i])*k >= nums[j]) return 0;
    //     if(i == j) return 0;
    //     if(dp.count(i) && dp[i].count(j)) return dp[i][j];
    //     return dp[i][j] = min( 1 + f(nums , k , i+1 , j) , 1 + f(nums , k , i , j-1));
    // }
    int minRemoval(vector<int>& nums, int k) {
        // dp.resize(nums.size()+1 , vector<int>(nums.size()+1 , -1));
        sort(nums.begin(), nums.end());
        // return f(nums , k , 0 , nums.size()-1);
        int i = 0 , j = 1;
        int n = nums.size();
        if(n == 1) return 0;
        int maxLen = 0;
        while(j < n){
            if((ll)(nums[i])*k >= nums[j]) j++;
            else i++;
            maxLen = max(maxLen , j - i);
        }
        return n - maxLen;
    }//always try to think like this solution;
};