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
    ll n,q; cin>>n>>q;
    vl v(n); For(i,0,n) cin>>v[i];
    vl pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + v[i];
    }
    for(int i = 1; i < n; i++){
        v[i] = max(v[i], v[i-1]);
    }
    while(q--){
        ll x; cin>>x;
        auto it = upper_bound(v.begin(),v.end(), x);
        int idx = n-1;
        if(it != v.end()) idx = it - v.begin();
        if(v[idx] > x) idx--;
        if(idx < 0){
            cout<<0<<" ";
        }
        else cout<<pref[idx]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}