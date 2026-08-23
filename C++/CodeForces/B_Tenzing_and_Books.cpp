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
    ll n; cin >> n;
    ll k; cin >> k;
    bool ok = 0;
    ll tt = 0;
    if(k == 0) ok = 1;
    bool check = 1;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(check){
            if((x|k) == k) tt |= x;
            else{
                check = 0;
                continue;
            }
            if(tt == k) ok = 1;
        }
    }
    ll tt1 = 0;
    check = 1;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(check){
            if((x|k) == k) tt1 |= x;
            else{
                check = 0;
                continue;
            }
            if(tt1 == k) ok = 1;
        }
    }
    ll tt2 = 0;
    check = 1;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(check){
            if((x|k) == k) tt2 |= x;
            else{
                check = 0;
                continue;
            }
            if(tt2 == k) ok = 1;
        }
    }
    if(((tt|tt1) == k) || ((tt|tt2) == k) || ((tt|tt1|tt2) == k)) ok = 1;
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
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