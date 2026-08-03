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
vi vis;
ll cnt, two;
void dfs(vector<pair<int,vi>> &g, int i, int color){
    g[i].F = color;
    if(color == 1) cnt++;
    if(color == 2) two++;
    vis[i] = 1;
    for(auto &ele : g[i].S){
        if(!vis[ele]){
            dfs(g, ele , 3 - color);
        }
    }
}
void solve(){
    int n; cin>>n;
    vector<pair<int,vi>> g(n+1);
    for(int i = 0; i < n-1; i++){
        int u , v; cin>>u>>v;
        g[u].S.PB(v);
        g[v].S.PB(u);
    }
    vis.assign(n+1, 0);
    cnt = 0;
    two = 0;
    dfs(g, 1, 1);

    ll res = 0;
    res = (cnt*two - (n-1));
    // for(int i = 1; i <= n; i++){
    //     if(g[i].F == 1 && (two - (int)g[i].S.size() >= 0) ){
    //         res += two - (int)g[i].S.size();
    //         two--;
    //     }
    //     else if(g[i].F == 2 && (cnt - (int)g[i].S.size() >= 0) ) {
    //         res += cnt - (int)g[i].S.size();
    //         cnt--;
    //     }
    // }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}