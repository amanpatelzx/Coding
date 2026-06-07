#include<bits/stdc++.h>
using namespace std;
bool check(int val, int x){
    if(val > x) return 1;
    else return 0;
}
int Lower_bound(vector<int> &v, int x){
    int n = v.size();
    int low = 0, high = n-1;
    int ans = n;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(v[mid],x)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}
int main(){
    vector<int> v = {1,2,3,4,4,6};
    int res = Lower_bound(v, 4);
    cout<<res<<"\n";
}