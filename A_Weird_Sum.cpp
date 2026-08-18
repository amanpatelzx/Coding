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
    int n, m; cin>>n>>m;
    map<int,vector<int>> row;
    map<int,vector<int>> col;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x;
            cin>>x;
            row[x].PB(i);
            col[x].PB(j);
        }
    }
    ll res = 0;
    for(auto &[ele , arr] : row){
        int k = arr.size();
        if(k == 1) continue;
        for(int i = 0; i < k; i++){
            res += 1LL*arr[i] * (2LL*i - k+1);
        }
    }
    for(auto &[ele , arr] : col){
        sort(arr.begin(),arr.end());
        int k = arr.size();
        if(k == 1) continue;
        for(int i = 0; i < k; i++){
            res += 1LL*arr[i] * (2LL*i - k+1);
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}