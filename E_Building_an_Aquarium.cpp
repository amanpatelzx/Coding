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

bool is_true(vl &v, ll mid, ll x){
    ll sum = 0;
    ll n = v.size();
    For(i,0,n-1){
        sum += min(v[i],mid);
    }
    ll res = (sum+x)/n;
    if(mid > res) return 1;
    else return 0;
}
void solve(){
    ll n,x; cin>>n>>x;
    vl v(n);
    For(i,0,n-1) cin>>v[i];
    ll sum = 0;
    For(i,0,n-1) sum += v[i];
    //area = base*height >= sum + x, here base  = n;
    // height = ceil((sum+x)*1.0/base);
    // ll res = ceil(((sum+x)*1.0)/n);
    // cout<<res<<"\n";

    ll low = 0, high = INT_MAX;
    ll res = INT_MAX;
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(is_true(v,mid,x)){
            res = min(res, mid);
            high = mid-1;
        }
        else low = mid + 1;
    }
    cout<<res-1<<'\n';
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