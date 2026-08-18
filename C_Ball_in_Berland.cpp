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
    int a, b, k; cin>>a>>b>>k;
    vector<vector<int>> v(2, vector<int>(k));
    for(int i = 0; i < k; i++) cin>>v[0][i];
    for(int i = 0; i < k; i++) cin>>v[1][i];

    sort(v.begin(), v.end());
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < k; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    map<int,vector<int>> mp;
    for(int i = 0; i < k; i++){
        mp[v[1][i]].push_back(i);
    }
    for(auto &ele : mp){
        cout<<ele.first<<" -> ";
        for(auto &it : ele.second) cout<<it<<' ';
        cout<<"\n";
    }
    cout<<"\n";
    vetor<int> a(k);
    for(int i = 0; i < k; i++) a[i] = v[0][i];
    ll res = 0;
    for(int i = 0; i < k; i++){
        auto it = upper_bound(a.begin(), a.end(),)
        int idx = n-1;
        if(it != a.end()) idx = it - a.begin(); 
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}