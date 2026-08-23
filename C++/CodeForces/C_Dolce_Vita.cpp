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
    ll n ,x; cin>>n>>x;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    
    vl pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i-1] + v[i];
    ll days = 0;
    // note -> days*(len) + pref[i] <= x;
    //let currDays = d, d(n*(n+1)/2)
    ll res = 0;
    for(int i = n-1; i >= 0; i--){
        ll val = pref[i];
        //currVal = pref[i] + days*(len);
        // (N*(N+1)/2) + currVal <= x -> D++;
        //finally res += D*len;
 
        val = pref[i] + days*(i+1);
        ll D = 0;
        // D =  (x-val)/(i+1)+1;
        // // while(D*(i+1) + val <= x) D++;
        // if(D > 0){
        //     res += D*(i+1);
        //     days += D;
        // }
        if(x >= val){
            ll D = (x-val)/(i+1)+1;
            res += D *(i+1);
            days += D;
        }
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