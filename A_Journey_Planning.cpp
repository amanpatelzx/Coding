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
// ll dp[200004];
// ll f(vl &v, int i){
//     int n = v.size();
//     if(dp[i] != -1) return dp[i];
//     ll res = 0;
//     for(int j = i+1; j < n; j++){
//         if(j-i == v[j] - v[i]){
//             res = max(res , v[j] + f(v, j));
//         }
//     }
//     return dp[i] = res;
// }
void solve(){
    int n; cin>>n;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    ll res = 0;
    // memset(dp, -1, sizeof(dp));
    // for(int i = 0; i < n; i++){
    //     res = max(res, v[i] + f(v , i));
    // }
    //j - i = v[j] - v[i]  => v[j] - j = v[i] - i;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        mp[v[i] - i] += v[i];
    }
    for(auto &[A, B] : mp) res = max(res , B);
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}