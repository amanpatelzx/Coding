#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    int n;
    cin>>n;
    vector<vector<ll>> v(n);
    for(int i = 0; i < n; i++){
        int m;
        cin>>m;
        vector<ll> nums(m);
        for(int  j = 0; j < m;j++) cin>>nums[j];
        sort(nums.begin(),nums.end());
        v[i] = nums;
    }
    // sort(v.begin(), v.end());
    int idx = 0;    
    ll val = v[0][1];
    for(int i = 0; i < n; i++){
         if(v[i][1] < val){
            val = v[i][1];
            idx = i;
         }
    }
    ll result = 0;
    ll mini = v[idx][0];
    for(int i = 0; i < n; i++){
        if(i == idx) continue;
        mini = min(mini, v[i][0]);
        result += v[i][1];
    }
    result += mini;
    cout<<result<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}