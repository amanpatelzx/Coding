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
    ll n, x, y; cin>>n>>x>>y;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vl a(n), b(n);
    for(int i = 0; i < n; i++) a[i] = v[i] % x;
    for(int i = 0; i < n; i++) b[i] = v[i] % y;

    // for(int i = 0; i < n; i++) cout<<a[i]<<" ";
    // cout<<"\n";
    // for(int i = 0; i < n; i++) cout<<b[i]<<" ";
    // cout<<"\n"<<"\n";

    map<ll,map<ll,ll>> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]][b[i]]++;
    }
    int limit = x/2;
    ll res = 0;
    // for(auto &ele : mp){
    //     for(auto &it : ele.second){
    //         cout<<ele.first<<" "<<it.first<<" "<<it.second<<" \n";
    //     }
    // }
    for(int i = 0; i < n; i++){
        ll val = (x - a[i] + x) % x;
        ll B = b[i];
        if(mp.count(val) && mp[val].count(B)){
            res += mp[val][B];
            if(val == a[i]) res--;   
        }
    }
    
    cout<<res/2<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}