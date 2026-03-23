class Solution {
public:
typedef long long ll;

    bool is_true(ll val , vector<int> & nums , int height){
        ll sum = 0;
        for(int i = 0; i < nums.size(); i++){
            ll temp = val/(ll)(nums[i]); // divide for to get value of n in n*(n+1)/2;
            temp *= 2; // to convert n*(n+1) = temp*2;
            int n = (-1 + sqrt(1 + 4*temp))/2;//shri daracharya method
            sum += n;
        }
        // cout<<val<<" ";
        if(sum >= height){
            // cout<<"True\n";
            return true;
        }
        else{
            // cout<<"false\n";
             return false;
        }
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {

        ll low = INT_MAX , high = INT_MIN;
        ll n = workerTimes.size();
        for(int i = 0; i < n; i++){
            low = min(low , (ll)(workerTimes[i]));
            high = max(high , (ll)(workerTimes[i]));
        }
        high = high*((ll)(mountainHeight)*(ll)(mountainHeight+1)/2);

        // without above, you can also start low = 0, high = 1e18, but it will take more time
        ll result = 0;
        while(low <= high){
            ll mid = low + (high - low) / 2;

            if(is_true(mid, workerTimes , mountainHeight)){
                result = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return result;
    }
};