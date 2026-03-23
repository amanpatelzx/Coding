#include <bits/stdc++.h>
using namespace std;
 int longestArithmetic(vector<int>& nums) {
        int ans = 0;
        int temp;
        int idx;
        unordered_map<int , pair<int,int>> mp;
        for(int i = 0; i < nums.size(); i++){
            bool check = true;
            int count = 0;
            int start = i;
            int end = i;
            int diff = -1;
            for(int j = i+1; j < nums.size(); j++){
                if(check){
                   if(diff == -1){
                       diff = nums[j] - nums[j-1];
                       count++;
                       end = j;
                   }
                    else {
                        if(nums[j] - nums[j-1] != diff){
                            temp = nums[j];
                            idx = j;
                            nums[j] = diff + nums[j-1];
                            check = false;
                            count++;
                            end = j;
                        }
                    }
                }
                else{
                    if(nums[j] - nums[j-1] == diff){
                        count++;
                        end = j;
    
                    }
                    else {
                        break;
                    }
                }
                nums[idx] = temp;
                if(mp.count(diff)){
                    int tempStart = mp[diff].first;
                    int tempEnd = mp[diff].second;
                    if( j >= tempStart && j < tempEnd) break;
                }
            }
            mp[diff] = {start , end};
            ans = max(ans , count);
        }
        return ans;
    }
int main() {
    vector<int> nums = {9,7,5,10,1 , -1};
    // vector<int> nums = {1,2,6,4};
    cout<<longestArithmetic(nums);
}