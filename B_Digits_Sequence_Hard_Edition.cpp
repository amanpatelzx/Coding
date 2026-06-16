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

ll f(ll n){
    //1 - 9
    ll a = 9;
    if(n < 10){
        return n;
    }
    //10 - 99
    ll b = (100 - 10) * 2;
    if(n < 100){
        return a + (n - 9)*2;
    }
    //100 - 999
    ll c = (1000 - 100) * 3;
    if(n < 1000){
        return a + b + (n-99)*3;
    }
    //1000 - 9999;
    ll d = (10000 - 1000) * 4;
    if(n < 10000){
        return a + b + c + (n-999)*4;
    }
    //10000 - 99999;
    ll e = (100000 - 10000) * 5;
    if(n < 100000){
        return a + b + c + d + (n-9999)*5;
    }
    //100000 - 999999;
    ll f = (1000000 - 100000) * 6;
    if(n < 1000000){
        return a + b + c + d + e + (n-99999)*6;
    }
    //1000000 - 9999999;
    ll g = (10000000 - 1000000) * 7;
    if(n < 10000000){
        return a + b + c + d + e + f + (n-999999)*7;
    }
    //10000000 - 99999999;
    ll h = (100000000LL - 10000000LL) * 8LL;
    if(n < 100000000LL){
        return a + b + c + d + e + f + g + (n-9999999LL)*8LL;
    }
    //100000000 - 999999999;
    ll i = (1000000000LL - 100000000LL) * 9;
    if(n < 1000000000LL){
        return a + b + c + d + e + f + g + h + (n-99999999LL)*9LL;
    }
    //1000000000 - 9999999999;
    ll j = (10000000000LL - 1000000000LL) * 10LL;
    if(n < 10000000000LL){
        return a + b + c + d + e + f + g + h + i + (n-999999999LL)*10LL;
    }
    //10000000000 - 99999999999;
    ll k = (100000000000LL - 10000000000LL) * 11LL;
    if(n < 100000000000LL){
        return a + b + c + d + e + f + g + h + i + j + (n-9999999999LL)*11LL;
    }
    //100000000000 - 999999999999;
    ll l = (1000000000000LL - 100000000000LL) * 12LL;
    if(n < 1000000000000LL){
        return a + b + c + d + e + f + g + h + i + j + k + (n-99999999999LL)*12LL;
    }
    //1000000000000 - 9999999999999;
    ll m = (10000000000000LL - 1000000000000LL) * 13LL;
    if(n < 10000000000000LL){
        return a + b + c + d + e + f + g + h + i + j + k + l + (n-999999999999LL)*13LL;
    }
    //10000000000000 - 99999999999999;
    if(n < 100000000000000LL){
        return a + b + c + d + e + f + g + h + i + j + k + l + m + (n-9999999999999LL)*14LL;
    }
    return 0;
}

void solve(){
    ll k; cin>>k;

    ll low = 0, high = 1e13;
    ll res = 0;
    auto check = [&](ll mid){
        ll cnt = f(mid);
        return cnt >= k;
    };
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(mid)){
            res = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    ll cnt = f(res-1);
    ll diff = k - cnt;
    string s = to_string(res);
    int ans =  s[diff-1] - '0';
    cout<<ans<<"\n";
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