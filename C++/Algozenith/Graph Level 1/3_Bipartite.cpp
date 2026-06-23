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
#define For(i,a,b) for (int i = a; i <= b; i++)
#define INF 1e9
int n;
vector<vector<int>> g;
vector<int> vis;
bool isBipartite = false;
void dfs(int node, int color){
    vis[node] = color;
    if(isBipartite) return;
    for(auto &v : g[node]){
        if(vis[v]){
            if(vis[v] == color){
                isBipartite = true;
            }
        }
        else{
            dfs(v, 3 - color);
        }
    }
}
int main(){
    int m;
    cin>>n>>m;
    g.resize(n+1);
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vis.assign(n+1, 0);
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i,1);
        }
    }
    if(isBipartite) cout<<"NO, its not Bipartite\n";
    else cout<<"Yes, It's Bipartite \n";
}