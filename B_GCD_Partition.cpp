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
    int n; cin>>n;
    vl v(n); For(i,0,n) cin>>v[i];
    vl pref(n);
    pref[0] = v[0];
    For(i,1,n) pref[i] = pref[i-1] + v[i];
    ll total = 0;
    For(i,0,n) total += v[i];
    ll res = 1;
    for(int i = 0; i < n-1; i++){
        res = max(res, __gcd(pref[i], total - pref[i]));
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