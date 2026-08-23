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

    auto lcm = [&](ll a, ll b){
        return a/__gcd(a,b)*b;
    };
    ll X = n/x;
    ll Y = n/y;
    ll XY = n/lcm(x,y);
    X -= XY;
    Y -= XY;
    ll Ysum = Y*(Y+1)/2;
    ll Xsum = (X)*(2*n + (X-1)*(-1))/2;
    ll res = Xsum - Ysum;
    cout<<res<<"\n";


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}