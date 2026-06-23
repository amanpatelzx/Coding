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
vector<vector<pair<int,int>>> g;
vector<int> dis;
vector<int> vis;
void f(int sr){
    dis.assign(n+1,INF);
    vis.assign(n+1, 0);
    dis[sr] = 0;
    priority_queue<pair<int,int>> q;
    q.push({0, sr});
    while(!q.empty()){
        int x = q.top().second;
        q.pop();

        if(vis[x]) continue;
        vis[x] = 1;

        for(auto v : g[x]){
            int neigh = v.F;
            int cost = v.S;
            if(dis[neigh] > dis[x] + cost){
                dis[neigh] = dis[x] + cost;
                q.push({-dis[neigh], neigh});
            }
        }
        
    }
}
int main(){
    int m;
    cin>>n>>m;
    g.resize(n+1);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    f(0);
    for(int i = 0; i < n; i++){
        cout<<i<<" : "<<dis[i]<<"\n";
    }
}