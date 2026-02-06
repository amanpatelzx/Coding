class Solution {
public:
typedef long long ll;
    // int binary_search(int &l,  int &p , vector<int> &nums){
    //     int low  = l, mid, high = p;
    //     int target = 0;
    //     while(low < high){
    //         mid = (high - low)/2 + low;
    //         target = mid;
    //         if(nums[mid] == 0) return target = mid;
    //         else if(abs(nums[mid] - nums[mid-1])) low = mid + 1;
    //         else if(nums[mid] > 0) high = mid - 1;
    //     }
    //     return target;
    // }
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        vector<set<int>> set_of_trionic;
        set<int> trionic;
        
        int j = 0;
        while(j < n){
            int i = j;
            int mark = i;
            int jump = i;
            trionic.clear();
            trionic.insert(i);//l
            while(i < n-1 && nums[i+1] > nums[i]) i++;
            if(i != mark) trionic.insert(i);//p
            mark = i;
            if(trionic.size() == 1){
                j++;
                continue;
            }
            while( i < n-1 && nums[i+1] < nums[i]) i++;
            if( i != mark) trionic.insert(i);//q
            mark = i;
            jump = mark;
            while(i < n-1 && nums[i+1] > nums[i]) i++;
            if( i != mark) trionic.insert(i);// r
            j = jump;
            if(trionic.size() == 4) set_of_trionic.push_back(trionic);
        }//till here we have find set of all trionic;

        // now we will find the maximum sum;

        ll finalAns = LONG_MIN;
        cout<<endl;
        cout<<"NO_of_trionic = "<<set_of_trionic.size();
        cout<<endl;
        for(int i = 0; i < set_of_trionic.size(); i++){
            auto temp = set_of_trionic[i];
            int l , p , q , r;
            int count = 0;
            ll currSum = 0;//here we store curr sum;
            for(auto ele : temp){
                if(count == 0) l = ele;
                if(count == 1) p = ele;
                if(count == 2) q = ele;
                if(count == 3) r = ele;
                count++;
            }
            cout<<endl;
            cout<<l<<" "<<p<<" "<<q<<" "<<r;
            int newL;
            if(nums[p] > 0 && nums[l] < 0 && p - l >= 2){
                // newL = binary_search(l , p , nums);
                // cout<<endl;
                // cout<<"newL = "<<newL<<"\n";
                // if(nums[newL] >= 0) l = newL;
                // else if(nums[newL] < 0) l = newL+1;
                int idx = 0;
                for(int k = l; k < p; k++){
                    if(nums[k] <= 0) idx = k;
                    else break;
                }
                l = idx + 1;
                if(p - l < 1) l = l-1;
            }
            if(nums[p] < 0){
                if(p-2 >= 0) l = p-1;
            }
            for(int j = l; j <= q; j++){
                currSum += nums[j];   
            }
            if(nums[r] < 0){
                currSum += nums[q+1];
                finalAns = max(finalAns , currSum);
                cout<<endl;
                cout<<"Ans -> "<<currSum<<"\n";
                continue;
            }
            ll tempSum = 0;
            for(int k = q+1; k <= r; k++){
                tempSum += nums[k];
            }
            if(tempSum >= (ll)(nums[q+1])) currSum += tempSum;
            if(tempSum < (ll)(nums[q+1])) currSum += nums[q+1];
            finalAns = max(finalAns , currSum);
            cout<<endl;
            cout<<"Ans -> "<<currSum<<"\n";
        }
        return finalAns;
    }
};