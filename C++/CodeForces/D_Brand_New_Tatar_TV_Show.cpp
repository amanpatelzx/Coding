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
 
void solve() {
    int n, k; cin>>n>>k;
    vi v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    vector<bool> vis(n);
    
    int dd = INT_MAX; 
    for(int i = n - 1; i >= 0; i--){
        if(i > 0 && v[i] == v[i-1]) continue;
        int a = v[i];
        auto it2 = upper_bound(v.begin(), v.end(), a);
        auto it3 = lower_bound(v.begin(), v.end(), a);
        int aa = it2 - it3; 

        if(dd <= a + k){
            vis[i] = 1;
        } 
        else{
            if(aa % 2 == 0) vis[i] = 1;
        }
        if(!vis[i]) dd = a;
    }
    bool ok = false;
    for(int i = 0; i < n; i++) {
        if((i == 0 || v[i] != v[i-1]) && vis[i]){
            ok = 1;
            break;
        }
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}