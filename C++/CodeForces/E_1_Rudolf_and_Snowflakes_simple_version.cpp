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
ll f2(ll k, ll limit){
    if(limit == 0) return 1;
    return 1 + k*f2(k,limit-1);
}
bool f(ll k, ll n){
    // n = 1 + k(1 + k(1+k*(1+k)...))
    ll limit = 0;
    ll tt = k;
    while(tt < n){
        tt *= k;
        limit++;
    }
    for(ll i = 1; i < limit; i++){
        ll val = 1 + k*f2(k, i);
        if(val > n) return 0;
        if(val == n) return 1;
    }
    return 0;

} 
void solve(){
    ll n; cin>>n;
    for(ll i = 2; i*i <= n; i++){
        if(f(i, n)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}