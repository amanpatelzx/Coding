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
    int n, m, k; cin>>n>>m>>k;
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    // if(k >= m){
    //     cout<<k<<"\n";
    //     return;
    // }
    ll res = 1e17;
    ll low = 1, high = m+1;

    auto check = [&](ll mid){
        ll cnt = 0;
        ll ans = 0;
        ll curr = 0;
        ll last = v.front();
        for(int i = 1; i < n; i++){
            if((v[i] - last) + 1 > mid){
                cnt++;
                ans += v[i-1] - last + 1;
                last = v[i];
            }
        }
        cnt++;
        ans += v.back() - last + 1;
        // cout<<mid<<" , "<<cnt<<" -> "<<ans<<"\n";
        if(cnt <= k){
            res = min(res, ans);
        }
        return cnt <= k;
    };
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(mid)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
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