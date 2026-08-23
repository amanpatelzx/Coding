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
ll fact[1000010];
ll M = 1000000007;
void factorial(){
    fact[1] = 1;
    fact[0] = 1;
    for(ll i = 2; i <=1000004; i++){
        fact[i] = (i*fact[i-1]) % M;
    }
}
ll f(ll a, ll b){
    if(b == 0) return 1 % M;
    if(b == 1) return a % M;
    ll tt = f(a,b/2);
    tt = (tt*tt) % M;
    if(b&1) {
        tt = (tt*a) % M;
    }
    return tt % M;
}
void solve(){
    ll a,b; cin>>a>>b;

    //a!/(a-b)!*b!;
    ll ans = (fact[a]*(f((fact[b]*fact[a-b])%M,M-2))) % M;
    cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    factorial();
    cin>>_; while(_--)
    solve();
}