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
int parent[500005];
int Rank[500003];
int find(int a){
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a]);
}
void UNION(int a, int b){
    int x = find(a);
    int y = find(b);

    if(x == y) return;
    if(Rank[x] > Rank[y]){
        parent[y] = x;
        Rank[x]++;
    }
    else{
        parent[x] = y;
        Rank[y]++;
    }
}
void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> v(m);
    for(int i = 0; i < m; i++){
        int x; cin>>x;
        for(int j =  0; j < x; j++){
            int val; cin>>val;
            v[i].PB(val);
        }
    }
    for(int i = 1; i <= 500003; i++) parent[i] = i;
    memset(Rank, 0, sizeof(Rank));
    for(int i = 0; i < m; i++){
        for(int j = 1; j < v[i].size(); j++){
            UNION(v[i][0], v[i][j]);
        }
    }
    vi res(n);
    map<int,int> mp;
    for(int i = 1; i <= n; i++){
        mp[find(i)]++; 
    }
    for(int i = 1; i <= n; i++){
        res[i-1] = mp[find(i)];
    }
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