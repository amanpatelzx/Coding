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
    vl v(n); For(i,0,n-1) cin>>v[i];

    vl pref(n), suf(n);
    for(int i = 0; i < n-1; i++){
        ll left = INT_MAX, right = INT_MAX;
        if(i-1 >= 0) left = abs(v[i] - v[i-1]);
        if(i+1 < n) right = abs(v[i] - v[i+1]);
        if(left > right) pref[i+1] = 1 + pref[i];
        else pref[i+1] = right + pref[i];
    }
    for(int i = n-1; i >= 1; i--){
        ll left = INT_MAX, right = INT_MAX;
        if(i+1 < n) right = abs(v[i] - v[i+1]);
        if(i-1 >= 0) left = abs(v[i] - v[i-1]);
        if(left < right) suf[i-1] = 1 + suf[i];
        else suf[i-1] = left + suf[i];
    }

    ll m; cin>>m;
    while(m--){
        ll x, y; cin>>x>>y;

        if(x > y){
            cout<<abs(suf[y-1] - suf[x-1])<<"\n";
        }else{
            cout<<abs(pref[y-1] - pref[x-1])<<'\n';
        }
    }
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