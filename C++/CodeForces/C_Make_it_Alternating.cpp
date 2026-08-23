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
vector<ll> fact;
ll M = 998244353LL;
void solve(){
    string s; cin>>s;
    int n = s.size();

    vl v;
    int cnt = 1;
    bool ok = 1;
    if(s[0] == '0') ok = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        else{
            v.PB(cnt);
            cnt = 1;
        }
    }
    v.PB(cnt);
    ll sum =  0;
    int m = v.size();
    for(int i = 0; i < m;  i++){
        sum += v[i] - 1;
    }
    ll res = 1;
    for(int i = 0; i < m; i++){
        res = (res * v[i]) % M;
    }
    res = (res * fact[sum]) % M;
    cout<<sum<<" "<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    fact.resize(1000100);
    fact[0] = 1;
    for(ll i = 1; i < 1000100; i++){
        fact[i] = (fact[i-1]*i) % M;
    }
    while(t--){
        solve();
    }
}