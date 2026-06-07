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
    vl a(n), b(n);
    For(i,0,n-1) cin>>a[i];
    For(i,0,n-1) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    For(i,0,n-1){
        if(a[i] <= b[i]){
            cout<<0<<'\n';
            return;
        }
    }
    ll res = 1;
    ll M = 1000000007;

    for(ll i = n-1; i >= 0; i--){
        ll currIdx = n-1-i;

        ll len = a.end() - upper_bound(a.begin(),a.end(),b[i]);
        ll avail = len - currIdx;

        res = (res * avail) % M;
    }
    cout<<res<<'\n';
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