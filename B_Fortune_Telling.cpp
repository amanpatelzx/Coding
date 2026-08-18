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
    ll totalSum = x;
    for(auto &ele : v) totalSum += ele;
    if(totalSum % 2 == y % 2){
        cout<<"Alice\n";
        return;
    }
    else cout<<"Bob\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}