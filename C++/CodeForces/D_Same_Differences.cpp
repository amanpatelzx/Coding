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
    int n; cin>>n; 
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    for(int i = 0; i < n; i++){
        v[i] = v[i] - i-1;
    }
    unordered_map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    ll res = 0;
    for(auto &ele : mp){
        ll val = ele.S;
        val--;
        res += (val*(val+1)/2);
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