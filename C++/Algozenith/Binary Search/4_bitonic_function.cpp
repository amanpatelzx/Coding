//if fucntion is stricly increasing and then decreasing;
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v ,int mid){
    int n = v.size();
    if(mid == n-1) return 1;
    if(v[mid] > v[mid+1]) return 1;
    else return 0;
}
int binary_search(vector<int> &v){
    int n = v.size();
    int low = 0, high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(v,mid)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}
int main(){
    vector<int> v = {1,3,4,5,4,3,2,1};
    int res = binary_search(v);
    /* Rotated array is by res places*/
    cout<<res<<"\n";
}