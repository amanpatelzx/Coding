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
    if(b == 0) return 1;
    ll tt = f(a,b/2,M);
    tt = (tt*tt) % M;
    if(b&1) tt = (tt*a) % M;
    return tt%M;
}
void solve(){
    ll n, k; cin>>n>>k;
    //bro just think to maximise the sum - > so all bit should be set
    //to make and of all = 0, then in each ith bit of every no. 1 should be 0, that
    //thats all bit can be zero,
    //ith bit can choose in n ways, then total k bit -> n*n*..n = n^k
    ll M = 1e9+7;
    ll res = f(n,k,M);
    cout<<res<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}