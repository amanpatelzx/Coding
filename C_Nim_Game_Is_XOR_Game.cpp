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
    ll n; cin>>n;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    
    ll X = 0;
    for(int i = 0; i < n; i++){
        X ^= v[i];
    } 
    if(X == 0){
        cout<<1<<"\n";
        return;
    }

    // int idx = 0;
    // ll tt = X;
    // while(tt){
    //     idx++;
    //     tt/=2;
    // }
    
    if(n == 1){
        cout<<0<<"\n";
        return;
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        ll val = v[i];
        if((val^X) <= val) res++;
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}