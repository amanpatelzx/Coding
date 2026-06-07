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
bool check(vl &v, ll mid ,ll k){
    int n = v.size();
    for(int i = 0; i < n; i++){
        if(v[i] < mid){
            if(k >= mid - v[i]){
                k -= mid - v[i];
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}
void solve(){
    ll n, k; cin>>n>>k;
    vl v(n); For(i,0,n-1) cin>>v[i];
    sort(v.begin(),v.end());
    
    ll low = 0, high = LLONG_MAX;
    ll limit = 0;
    while(low <= high){
        ll mid = low + (high - low ) / 2;
        if(check(v, mid , k)){
            limit = max(limit, mid);
            low = mid + 1;
        }
        else high = mid-1;
    }
    ll res = 0;
    res = n * limit - n+1;
    // cout<<limit<<" ";
    auto it = upper_bound(v.begin(),v.end(), limit);
    ll left = v.end() - it;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > limit) break;
        cnt += limit - v[i];
    }
    ll right = k - cnt;
    res += min(n , left + right);
    cout<<res<<"\n";
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