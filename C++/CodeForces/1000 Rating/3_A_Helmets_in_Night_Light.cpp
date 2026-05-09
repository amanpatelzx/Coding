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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n), cost(n);

    for(int i = 0; i < n; i++) cin>>v[i];
    for(int i = 0; i < n; i++) cin>>cost[i];

    vector<vector<ll>> nums(n, vector<ll>(2));
    for(int i = 0 ; i <n; i++){
        nums[i][0] = cost[i];
        nums[i][1] = v[i];
    }
    nums.push_back({k,n-1});
    sort(nums.begin(), nums.end());

    ll ans = k;
    ll count = n-1;
    for(int i = 0; i < n; i++){
        ll c = nums[i][0];
        ll p = nums[i][1];
        if(count-p > 0){
            ans += c*p;
            count -= p;
        }
        else{
            ans += count * c;
            cout<<ans<<"\n";
            return;
        }
    }
    cout<<ans<<"\n";
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