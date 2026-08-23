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

void solve(){
    ll n; cin>>n;
    vl v(n); for(int i =0; i < n; i++) cin>>v[i];
    if(n % 2 == 1){
        cout<<"YES\n";
        return;
    }
    for(int i = 0; i < n-2; i++){
        ll diff = v[i] - v[i+1];
        v[i+1] += diff;
        v[i+2] += diff;
    }
    if(v[n-1] >= v[n-2]){
        cout<<"YES\n";
        return;
    }
    else cout<<"NO\n";
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}