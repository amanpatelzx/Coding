#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    ll n; cin>>n;
    vl v(n);
    For(i,0,n-1) cin>>v[i];
    vl fact;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            fact.PB(i);
            if(i*i != n){
                fact.PB(n/i);
            }
        }
    }
    // cout<<"Factor -> ";
    sort(fact.begin(),fact.end());
    int m = fact.size();
    // For(i,0,m-1)cout<<fact[i]<<" ";
    // cout<<"\n";
    ll res = 0;
    For(i,0,m-1){
        ll maxi = INT_MIN, mini = LLONG_MAX;
        for(ll j = 0; j < n; j += fact[i]){
            ll cnt = 0;
            for(ll k = 0; k < fact[i]; k++) cnt += v[j+k];
            maxi = max(maxi, cnt);
            mini = min(mini, cnt);
        }
        res = max(res, maxi-mini);
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}