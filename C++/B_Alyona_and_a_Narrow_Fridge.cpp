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
    int n, m, k; cin>>n>>m>>k;
    vi v(n); for(int i = 0 ; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vi diff(n-1);
    for(int i = 0; i < n-1; i++){
        diff[i] = v[i+1]-v[i]-1;
    }
    sort(diff.begin(), diff.end());
    int ans = n;
    for(int i = 0; i < n-k; i++){
        ans += diff[i];
    }
    cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}