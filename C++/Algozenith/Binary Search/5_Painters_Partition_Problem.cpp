//This is sweep contribution technique of binary search, here ,we try to make bucket and do contribute in answer;
#include<iostream>
#include<vector>
using namespace std;
bool is_true(vector<int> &v, int mid, int k){
    int n = v.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + v[i] <= mid) sum += v[i];
        else{
            k--;
            if(v[i] > mid) return 0;
            sum = v[i];
        }
    }
    if(sum > 0) k--;
    if(k < 0) return 0;
    else return 1;
}
int findLargestMinDistance(vector<int> &v, int k)
{
    //    Write your code here.
    int n = v.size();
    int low = 0, high = LLONG_MAX;
    int res = 1e9;
    while(low <= high){
        int mid = low + (high - mid) / 2;
        if(is_true(v, mid, k)){
            res = min(res, mid);
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return res;
    
}