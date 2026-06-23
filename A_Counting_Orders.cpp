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
    int n ; cin>>n;
    vi a(n),b(n); 
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    ll res = 1;
    ll M = 1e9+7;
    for(int i = n-1; i >= 0; i--){
        int val = b[i];
        auto it = upper_bound(a.begin(), a.end(), val);
        int idx = it - a.begin();
        int diff = i - idx + 1;
        res = (res * (ll)diff) % M;
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