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
/*
    6 4
    1 1 1 1 
    2 2 2 2 
    .
    .
    5 5 5 5 
    6 6 6 6

    1 2 2 2
    1 1 2 2
    1 1 1 2

    1 2 4 4
    1 

    a b c d e .....k
    where k <= n;


*/
int M = 1e9 + 7;

int n, k;
int dp[2002][2002];

int f(int cur, int len){
    if(len == 1){
        return 1;
    }
    if(dp[cur][len] != -1){
        return dp[cur][len];
    }
    ll ans = 0;
    for(int i = cur; i <= n; i += cur){
        ans += f(i, len - 1);
        ans %= M; 
    }
    return dp[cur][len] = ans;
}
void solve(){
    cin>>n>>k;
    memset(dp, -1, sizeof(dp));
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += f(i, k);
        ans %= M;
    }
    cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}