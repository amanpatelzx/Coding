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

bool check(vl &v, ll mid, ll k){
    int n = v.size();
    For(i,1,n-1){
        ll diff = v[i] - v[i-1];
        if(diff > mid){
            if(k == 0) return 0;
            else{
                // mid = (diff-1)/x -> x = (diff-1)/mid;
                k -= (diff-1)/mid;
                if(k < 0) return 0;
            }
        }
    }
    return 1;
}
void solve(){
    ll n, k; cin>>n>>k;
    vl v(n);
    For(i,0,n-1) cin>>v[i];
    ll low = 1, high = INT_MAX, res = high;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(v, mid, k)){
            res = min(res, mid);
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<res<<'\n';
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