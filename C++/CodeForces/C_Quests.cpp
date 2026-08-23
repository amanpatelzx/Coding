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
    ll n,k; cin>>n>>k;
    vl a(n),b(n);
    For(i,0,n-1) cin>>a[i];
    For(i,0,n-1) cin>>b[i];

    vector<pl> v(n);
    ll maxi = 0;
    For(i,0,n-1){
        maxi = max(maxi, b[i]);
        v[i].S = maxi;
        if(i == 0) v[i].F = a[i];
        else{
            v[i].F = a[i] + v[i-1].F;
        }
    }
    ll res = 0;
    For(i,0,min(k-1,n-1)){
        ll val = v[i].F;
        ll idx = k-i-1;
        val += idx*v[i].S;
        res = max(res,val);
    }
    cout<<res<<'\n';
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