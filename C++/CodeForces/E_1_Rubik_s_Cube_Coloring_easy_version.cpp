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
    if(b == 0) return 1 % M;
    ll tt = f(a, b/2, M);
    tt = (tt*tt) % M;
    if(b & 1) tt = (a*tt) % M;
    return tt % M;
}
void solve(){
    int n; cin>>n;
    ll M = 1000000007;
    ll total = 0;
    for(int i = 1; i < n; i++){
        total += (1LL << i);
    }
    ll res = (f(4, total, M)) % M;
    cout<<((6*res) % M)<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}