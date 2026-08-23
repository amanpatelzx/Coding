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
    ll n, l, r; cin >> n >> l >> r;

    vector<ll> ans(n);
    //eg l = 10, r = 20;
    // 10 % 3 = 1, req = 10 + (3 - 1);
    for(ll i = 1; i <= n; i++){
        ll rem = l % i;
        ll req = (l + (i-rem));
        if(rem == 0) req = l;
        if(req > r){
            cout<<"NO\n";
            return;
        }
        ans[i-1] = req;
    }
    cout<<"YES\n";
    For(i,0,n) cout<<ans[i]<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}