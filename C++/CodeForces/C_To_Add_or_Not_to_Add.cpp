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
    ll n, k; cin>>n>>k;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    vl pref(n);
    for(int i = 1; i < n; i++){
        ll diff = v[i] - v[i-1];
        pref[i] = diff + pref[i-1];
    }

    vl totalPref(n);
    for(int i = 1; i < n; i++){
        totalPref[i] = totalPref[i-1] + pref[i];
    }
    ll res = 0, val = -1;

    auto check = [&](ll i, ll mid){
        ll A = pref[i];
        ll B = 0;
        if(mid > 0) B = totalPref[mid-1];
        ll diff =  1LL*(i - mid+1) * A - (totalPref[i] - B);
        if(diff <= k) return true;
        return false;
    };
    for(ll i = n-1; i >= 0; i--){
        ll low = 0, high = i;
        while(low <= high){
            ll mid = low + (high - low) / 2;
            if(check(i ,mid)){
                if(res <= (i - mid + 1)){
                    res = i - mid + 1;
                    val = v[i];
                }
                high = mid-1;
            }
            else low = mid+1;
        }
    }
    cout<<res<<" "<<val<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}