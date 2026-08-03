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
    vl v(n); For(i,0,n) cin>>v[i];
    vl pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + v[i];
    }
    ll sum = 0;
    for(int i = 0; i < n-k+1; i++){
        ll last = 0;
        if(i > 0) last = pref[i-1];
        sum += (pref[i+k-1] - last);
    }
    double res = (sum*1.0000000000)/(n-k+1);
    cout<<fixed<<setprecision(10)<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}