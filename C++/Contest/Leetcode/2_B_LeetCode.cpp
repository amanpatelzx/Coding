#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int longestArithmetic(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n-1);
        for(int i = 0; i < n-1; i++){
            arr[i] = nums[i+1] - nums[i];
        }
        int count = 1;
        int idx = 0;
        int maxCount = 1;
        for(int i = 1; i < n-1; i++){
            if(arr[i] == arr[i-1]){
                count++;
                if(maxCount < count){
                    idx = i;
                    maxCount = max(maxCount, count);
                }
            }
            else{
                count = 1;
            }
        }
        int result = 1;
        int i = idx-1;
        int leftCount = 0;
        int leftIdx = -1;
        while(i >= 0){
            if(arr[i] == arr[i+1]){
                leftCount++;
                leftIdx = i;
                i--;
            }
            else break;
        }
        int result1 = leftCount;
        bool check = true;
        i = leftIdx-1;
        while(i >= 0){
            if(check){
                result1++;
                check = false;
                arr[i] = arr[i+1];
                i--;
            }
            else {
                if(arr[i] == arr[i+1]){
                    result1++;
                    i--;
                }
            }
        }
        int result2 = leftCount;
        check = true;
        i = idx+1;
        while(i < n-1){
            if(check){
                result2++;
                check = false;
                arr[i] = arr[i-1];
                i++;
            }
            else {
                if(arr[i] == arr[i-1]){
                    result2++;
                    i++;
                }
            }
        }
        return max(result1, result2);
    }
int main() {
    vector<int> nums = {2,8,2,2,5};
    cout<<longestArithmetic(nums);
}