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
 
void solve(){
    ll n; cin>>n;
    vl v(n);
    For(i,0,n-1) cin>>v[i];
    vl res(n);
    ll mini = LLONG_MAX;
    ll sum = 0;
    For(i, 0, n-1){
        sum += v[i];
        ll ans = sum/(i+1);
        mini = min(ans, mini);
        res[i] = mini;
    }
    For(i,0,n-1) cout<<res[i]<<' ';
    cout<<'\n';
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