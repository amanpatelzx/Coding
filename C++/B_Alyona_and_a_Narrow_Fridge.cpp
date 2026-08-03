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
    ll n, h; cin>>n>>h;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    ll res = 1;
    ll low = 1,  high = n;
    auto check = [&](ll mid){
        vl tmp;
        for(int i = 0; i < mid; i++) tmp.PB(v[i]);
        sort(tmp.rbegin(), tmp.rend());
        ll sum = 0;
        for(int i = 0; i < mid; i += 2){
            sum += tmp[i];
        }
        return sum <= h;
    };
    while(low <= high){
        ll mid = low + (high - low ) / 2;
        if(check(mid)){
            res = mid;
            low = mid+1;
        }
        else high = mid - 1;
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}