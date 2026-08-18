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
    ll n, m; cin>>n>>m;
    vl v(n+1); for(int i = 1; i <= m; i++){
        ll x; cin>>x;
        v[x]++;
    }
    auto check = [&](ll mid){
        ll leftTime = 0;
        ll leftCnt = 0;
        for(int i = 1; i <= n; i++){
            ll currLeft = v[i] - mid;
            if(currLeft > 0){
                leftCnt += currLeft;
            }
            else{
                leftTime += abs(currLeft)/2LL;
            }

        }
        return leftTime >= leftCnt;
    };
    ll res = 1324;
    ll low = 0, high = 1e9; 
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(mid)){
            res = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}