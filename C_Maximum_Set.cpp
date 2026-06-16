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
    ll l ,r; cin>>l>>r;

    int maxi = 0;
    ll a = l;
    while(a <= r){
        maxi++;
        a *= 2;
    }
    if(maxi == 1){
        cout<<1<<" "<<r-l+1<<"\n";
        return;
    }
    ll bb = (1 << (maxi-1));
    // 100/16 == 6; cnt += 6-4+1;
    ll cnt = 0;
    cnt += (r/bb) - l + 1;
    bb = bb/2;
    bb *= 3;
    ll M = 998244353;
    if(r/bb >= l){
        cnt += ((r/bb-l+1)*(maxi-1)) % M;
    }
    cnt = cnt % M;
    cout<<maxi<<" "<<cnt<<'\n';
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