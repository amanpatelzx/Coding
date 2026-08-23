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
    ll n, k; cin>>n>>k;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        if(v[i] % k != 0) mp[k - v[i] % k]++;
    }
    if(mp.size() == 0){
        cout<<0<<"\n";
        return;
    }
    ll maxiF = 0;
    ll rem = 0;
    for(auto &ele : mp){
        if(maxiF <= ele.S){
            maxiF = ele.S;
            rem = ele.F;
        }
    }
    ll res = (maxiF-1)*k + rem + 1;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}