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
    ll n; cin>>n;
    vl v(n); For(i,0,n) cin>>v[i];
    ll res = LLONG_MIN;
    ll curr = 0;
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            v[i] += v[i-1];
        }
    }
    res = v.back();
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}