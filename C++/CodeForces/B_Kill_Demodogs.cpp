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

lll MOD = 1e9+7;
void solve(){
    ll n; cin>>n;
    lll N = n;
    lll A = (N*(N+1)*(2*N+1)/3 - N*(N+1)/2) % MOD;
    ll res = (ll)A;
    res = (res * 2022) % MOD;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}