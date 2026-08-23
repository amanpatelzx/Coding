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
 
void solve(){
    int n; cin>>n;
    vector<vector<pi>> g(n+1);
    queue<pi> q;
    vector<int> dp(n+1, -1);
    for(int i = 0; i < n-1; i++){
        int u,v; cin>>u>>v;
        g[u].PB({v,i});
        g[v].PB({u, i});
    }
    q.push({1,-1});
    dp[1] = 1;
    int res = 1;
    while(!q.empty()){
        int k = q.size();
        while(k--){
            auto P = q.front();
            q.pop();
            int currNode = P.F;
            int currIdx = P.S;
            for(auto &ele : g[currNode]){
                int next = ele.F;
                int idx = ele.S;
                if(dp[next] == -1){
                    if(idx < currIdx) dp[next] = dp[currNode]+1;
                    else dp[next] = dp[currNode];
                    q.push({next, idx});
                    res = max(res, dp[next]);
                }
            }
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}