#include<bits/stdc++.h>
using namespace std;
bool check(int val, int x){
    if(val < x) return 1;
    else return 0;
}
int binary_search(vector<int> &v){
    int n = v.size();
    int low = 0, high = n-1;
    int ans = 0;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(v[mid],v[0])){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}
int main(){
    vector<int> v = {6,7,1,2,3,4,4};
    int res = binary_search(v);
    /* Rotated array is by res places*/
    cout<<res<<"\n";
}