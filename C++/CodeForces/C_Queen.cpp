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
vector<int> res;
bool check(vector<pair<int,vector<int>>> &g, int node){
    if(g[node].F == 0) return true;
    return false;
}
void f(vector<pair<int,vector<int>>> &g, int node, int parent){
    bool ok = false;
    for(auto &ele : g[node].S){
        if(ele == parent) continue;
        ok |= check(g , ele);
        f(g, ele, node);
    }
    if(!ok && g[node].F == 1){
        res.PB(node);
    }
}
void solve(){
    int n; cin>>n; 
    vector<pair<int,vector<int>>> g(n+1);
    int root;
    res.clear();
    for(int i = 1; i <= n; i++){
        int v, p; cin>>v>>p;
        if(v == -1) root = i;
        if(v != -1){
            g[v].second.PB(i);
            g[i].second.PB(v);
            g[i].first = p;
        }
    }
    // for(int i = 1; i <= n-1; i++){
    //     cout<<i<<" -> ";
    //     for(auto &ele : g[i].S) cout<<ele<<" ";
    //     cout<<"\n";
    // }
    f(g, root, -3);
    if(res.empty()){
        cout<<-1<<"\n";
        return;
    }
    sort(res.begin(), res.end());
    for(auto &ele : res) cout<<ele<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}