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

    ll res =0;
    if(n > k) res = k;
    else {
        cout<<n<<"\n";
        return;
    }
    ll tt = n/k;
    ll maxi = 0;
    for(int i = 1; i <= tt; i++){
        ll cnt = 0;
        ll val = i;
        while(val > 0){
            ll rem = val % 2;
            cnt += rem;
            val = val/2;
        }
        maxi = max(maxi , cnt);
    }
    res = max(res, k*maxi);
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}