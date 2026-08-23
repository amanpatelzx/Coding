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
    ll n, x, y , z; cin>>n>>x>>y>>z;

    ll time = (n + (x+y) -1)/(x+y);

    // ll tt = n - (n+z*x-1)/(z*x);
    time = min(time , z + (n-x*z + (x+10*y)-1)/(x+10*y));
    cout<<time<<"\n";
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