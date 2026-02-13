// class Solution {
// public:
//     unordered_set<int> even;
//     unordered_set<int> odd;
//     int longestBalanced(vector<int>& nums) {
//         int n = nums.size();
//         int result = 0;
//         for(int i = 0; i < n; i++){
//             unordered_set<int> even;
//             unordered_set<int> odd;
//             for(int j = i; j < n; j++){
//                 if(nums[j] % 2 == 0) even.insert(nums[j]);
//                 if(nums[j] % 2 != 0) odd.insert(nums[j]);
//                 if(even.size() == odd.size()) result = max(result , j - i + 1);
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n); // it will update the as prefix sum till that ranges
        unordered_map<int, int> mp;// if any element repeat;
        int maxAns = 0;//its store max ans;
        for(int r = 0; r < n; r++){
            int val = (nums[r] % 2 == 0 ? 1 : -1);//for odd = -1 , even = +1
            sum[r] = val;
            if(mp.count(nums[r])){//we do -val from that index , where it previously present
                for(int i = 0; i <= mp[nums[r]]; i++){
                    sum[i] -= val;// if any element repeat , then do -val to its left element in sum
                    //becouse it dont have to count that why,
                    //and also we are adding in bellow;
                }
            }
            for(int i = 0; i < r; i++){
                sum[i] += val;//update val, becouase we are updating new element;
            }
            for(int i = 0; i < r; i++){
                if(sum[i] == 0) maxAns = max(maxAns , r - i + 1);
            }//if sum = 0 at any left index , then that is posible ans;
            mp[nums[r]] = r;
        }
        return maxAns;
    }
};