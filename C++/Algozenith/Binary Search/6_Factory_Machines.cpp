//Atomic item, contribution
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
bool check(vl &v, ll mid, ll t){
    ll sum = 0;
    int n = v.size();
    For(i, 0, n-1){
        sum += mid/v[i];
        if(sum >= t) return 1;
    }
    if(sum >= t) return 1;
    else return 0;
}
void solve(){
    ll n,t;
    cin>>n>>t;
    vl v(n);
    For(i,0,n-1) cin>>v[i];

    ll res = LLONG_MAX;
    ll low = 0, high = LLONG_MAX;
    while(low <= high){
        ll mid = low + (high - low ) / 2;
        if(check(v,mid,t)){
            res = min(res, mid);
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
}