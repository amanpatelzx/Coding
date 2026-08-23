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
ll M = 1e9 + 7;
// int vv = 1000005;
// vector<int> dp(vv);
// void f(){
// }
void solve(){
    int n; cin>>n;
    vector<ll> dp(n+1);
    dp[1] = 0;
    dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = (i-1)*(dp[i-1] + dp[i-2]);
        dp[i] %= M;
    }
    cout<<dp[n]<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}