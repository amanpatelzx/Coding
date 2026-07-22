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

ll f(vl &v, int l, int r){
    ll curr = v[l];
    ll maxi = v[l];
    for(int i = l+1; i <= r; i++){
        curr = max(curr + v[i], v[i]);
        maxi = max(maxi , curr);
    }
    return maxi;
}
void solve(){
    int n; cin>> n;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    ll sum = 0;
    for(auto &ele : v) sum += ele; 
    ll maxi = max(f(v, 1, n-1), f(v, 0, n-2));
    if(maxi < sum) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}