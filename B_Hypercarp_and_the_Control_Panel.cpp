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
int dp[200020][2];
ll f(vi &v, ll i, ll k){
    ll n = v.size();
    if(i >= v.size()) return 0;
    if(dp[i][k] != -1) return dp[i][k];
    ll res = INT_MAX;
    if(v[i-1] == v[i]){
        if(k > 0){
            if(i+1 < n){
                if(v[i] != v[i+1]){
                    swap(v[i], v[i+1]);
                    res = min(res, f(v, i+1, k-1));
                    swap(v[i], v[i+1]);
                }
            }
            res = min(res, 1 + f(v, i+1, k));
            
        }
        else{
            res = min(res, 1 + f(v, i+1, k));
        }
    }
    else{
        res = min(res, f(v, i+1, k));
    }
    return dp[i][k] = res;
}
void solve(){
    ll n; cin>>n;
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    memset(dp, -1, sizeof(dp));
    ll ans = f(v, 1, 1);
    // cout<<ans<<"\n";
    if(ans >= INT_MAX) ans = 0;
    cout<<n - ans<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}