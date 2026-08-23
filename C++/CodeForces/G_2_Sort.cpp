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
    ll n, k; cin>>n>>k;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vl arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = 2*v[i];
    }
    vi ans(n);
    ans[0] = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > v[i-1]) ans[i] = 1;
        else ans[i] = 0;
    }
    // for(int i = 0; i < n; i++) cout<<ans[i]<<" ";
    // cout<<'\n';
    int res = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(ans[i] == 1) cnt++;
        else{
            int tt = cnt - k;
            if(tt > 0) res += tt;
            cnt = 1;
        }
    }
    int tt = cnt - k;
    if(tt > 0) res += tt;
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}