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

// ll ans;
// map<pair<ll,ll>,ll> mp;
// void f(ll a, ll b, ll x,ll curr){
//     if( a == b){
//         ans = min(ans, curr);
//         return;
//     }
//     if(mp.count({a,b}) && mp[{a,b}] <= curr) return;
//     mp[{a,b}] = curr;

//     if(curr >= ans) return;

//     ans = min(ans, curr + abs(a - b));

//     if(a != 0) f(a/x, b, x, curr+1);
//     if(b != 0) f(a, b/x, x, curr+1);
//     return;
// }
void solve() {
    ll a, b,x; cin>>a>>b>>x; 
    if (x == 1) {
        cout<<abs(a - b)<<"\n";
        return;
    }
    ll ans = INT_MAX; 
    ll A = a;
    ll aa = 0;
    while(1){
        ll B = b;
        ll bb = 0;
        while(1){
            ans = min(ans, aa + bb + abs(A - B));
            if (B == 0) break;
            B /= x;
            bb++;
        }
        if (A == 0) break;
        A /= x;
        aa++;
    }
    cout<<ans<<"\n";
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