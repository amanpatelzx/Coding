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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    ll cnt = 0;
    vector<ll> all;
    for(int i = 0; i <n ; i++){
        if(v[i] <= q){
            cnt++;
        }
        else{
            if(cnt >= k){
                all.push_back(cnt);
            }
            cnt = 0;
        }
    }
    if(cnt >= k){
        all.push_back(cnt);
    }
    ll ans = 0;
    // ll dont = (k * (k-1))/2;
    for(int i = 0; i < all.size(); i++){
        ll m = all[i];
        ll inc = ((m-k+1) * (m-k+2)) / 2;
        ans += inc;
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