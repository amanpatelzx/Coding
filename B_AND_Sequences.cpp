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
ll M = 1e9 + 7;
ll per[200021];
void fact(){
    per[0] = 1;
    for(int i = 1; i <= 200020; i++){
        per[i] = (per[i-1] * i) % M;
    }
}
void solve(){
    ll n; cin>>n;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    ll res = 0;
    ll cnt = 0;
    ll totalAnd = v[0];
    for(int i =1 ; i < n; i++) totalAnd &= v[i];
    for(int i = 0; i < n; i++){
        if(v[i] == totalAnd) cnt++;
    }
    if(cnt < 2){
        cout<<0<<"\n";
        return;
    }
    else res = (((cnt * (cnt-1)) % M )* per[n-2]) % M;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fact();
    int _;
    cin>>_; while(_--)
    solve();
}