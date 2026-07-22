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
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];

    for(int i = 0; i < n; i++){
        v[i] = v[i] % m;
    }
    unordered_map<ll,ll> mp;
    unordered_set<ll> s;
    for(int i = 0; i < n; i++) mp[v[i]]++;
    int cnt = 0;
    for(auto &ele : mp){
        ll aa = ele.F;
        ll bb = m - ele.F;
        if(s.count(aa) || s.count(bb)) continue;
        if(aa == 0) cnt++;
        else if(aa == bb) cnt++;
        else{
            ll A = ele.S;
            ll B = 0;
            if(mp.count(bb)) B = mp[bb];
            if(abs(A-B) <= 1) cnt++;
            else cnt += abs(A-B);
        }
        s.insert(aa);
        s.insert(bb);
    }
    cout<<cnt<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}