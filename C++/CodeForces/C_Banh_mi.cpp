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
ll f(ll a, ll M){
    if(a == 1) return 2;
    if(a < 1) return 1;
    ll ans = f(a/2, M) % M;
    ans = (ans * ans) % M;
    if(a % 2 == 1){
        ans = (2 * ans) % M;
    } 
    return ans % M;
}
void solve(){
    ll n,q; cin>>n>>q;
    string s; cin>>s;

    vi pref(n);
    for(ll i = 0; i < n; i++){
        if(i) pref[i] = pref[i-1] + (s[i] == '1');
        else pref[i] = (s[i] == '1');
    }
    ll M = 1000000007;
    while(q--){
        ll l,r ; cin>>l>>r;
        ll curr = pref[r-1];
        ll left = 0;
        if(l > 1) left = pref[l-2];
        ll one = curr - left;
        ll zero = (r-l+1 - one);

        ll Ofone = f(one, M)-1;
        if(one == 0) Ofone = 0;
        ll ofZero = (Ofone) * (f(zero, M)-1) % M;
        if(zero == 0) ofZero = 0;
        ll res = (Ofone + ofZero) % M;
        cout<<res<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}