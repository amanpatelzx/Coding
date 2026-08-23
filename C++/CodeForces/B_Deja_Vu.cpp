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
    ll n,q; cin>>n>>q;
    vl a(n),x(q);
    For(i,0,n-1) cin>>a[i];
    For(i,0,q-1) cin>>x[i];
    
    US<ll> Set;
    For(i,0,q-1){
        ll val = x[i];
        if(!Set.count(val)){
            Set.insert(val);
            For(j,0,n-1){
                if(a[j] % (1 << val) == 0) a[j] += ((1 << (val-1)));
            }
        }
    }
    For(i,0,n-1) cout<<a[i]<<' ';
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