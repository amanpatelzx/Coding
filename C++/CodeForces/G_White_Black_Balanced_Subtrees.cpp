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
int res;
int dfs(vector<vector<int>> &g, string &s, int i){
    if(g[i].size() == 0){
        if(s[i-1] == 'B') return 1;
        else return -1;
    }
    int curr = s[i-1] == 'B' ? 1 : -1;
    for(auto &ele : g[i]){
        curr += dfs(g, s, ele);
    }
    if(curr == 0) res++;
    return curr;
}
void solve(){
    int n; cin>>n;
    vi v(n-1); for(int i = 0; i < n-1; i++) cin>>v[i];
    string s; cin>>s;
    vector<vector<int>> g(n+1);
    for(int i = 0; i < n-1; i++){
        g[v[i]].PB(i+2);
    }
    res = 0;
    int val = dfs(g,s,1);
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}