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
#define For(i,a,b) for (int i = a; i < b; i++)

ll f(ll a, ll b, ll M){
    if(b == 1) return a%M;
    if(b== 0) return 1%M;
    ll tt = f(a,b/2,M);
    tt = (tt*tt) % M;
    if(b % 2 == 1){
        tt = (a*tt) % M;
    }
    return tt;
}
void solve(){
    ll n,m,r,c; cin>>n>>m>>r>>c;

    ll top = (r-1)*m;
    ll left = n*(c-1);
    ll tt = (r-1)*(c-1);
    ll ans = top + left - tt;
    ll M = 998244353;
    ll res = f(2,ans , M);
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}