#include <bits/stdc++.h>
using namespace std;
 vector<int> makeParityAlternating(vector<int>& nums) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        int count  = 0;
        int n = nums.size();
        for(int i = 0;i < n-1; i = i+2){
            if(i+1 == n){
                minVal = min(minVal , nums[i]);
                maxVal = max(maxVal , nums[i]);
            }
            if((nums[i]%2 == 0 && nums[i+1] % 2== 1) || (nums[i]%2 == 1 && nums[i+1] % 2== 0)){
                minVal = min({minVal , nums[i] , nums[i+1]});
                maxVal = max({maxVal , nums[i] , nums[i+1]});
            }
            else {
                if(i == 0){
                    if(nums[i]%2 == 0) nums[i]++;
                    else{
                        if(nums[i] > 0)nums[i]++;
                        else nums[i]--;
                    }
                    count++;
                    minVal = min({minVal , nums[i] , nums[i+1]});
                    maxVal = max({maxVal , nums[i] , nums[i+1]});
                }
                else {
                    if(nums[i-1]%2 == 0){
                        if(nums[i] %2 == 0) {
                            if(nums[i] > 0)nums[i]++;
                            else nums[i]--;
                        }
                        else {
                            if(nums[i+1] > 0)nums[i+1]++;
                            else nums[i+1]--;
                        }
                        minVal = min({minVal , nums[i] , nums[i+1]});
                        maxVal = max({maxVal , nums[i] , nums[i+1]});
                        count++;
                    }
                    else {
                        if(nums[i] %2 == 0) {
                            if(nums[i+1] > 0)nums[i+1]++;
                            else nums[i+1]--;
                        }
                        else {
                            if(nums[i] > 0) nums[i]++;
                            else nums[i]--;
                        }
                        minVal = min({minVal , nums[i] , nums[i+1]});
                        maxVal = max({maxVal , nums[i] , nums[i+1]});
                        count++;
                    }
                }
            }
        }
        return {count, maxVal ,minVal};
    }
int main() {
    vector<int> nums = {-2,-3,1,4};
    vector<int> v = makeParityAlternating(nums);
    cout<<v[0]<<" "<<v[1]; 
}