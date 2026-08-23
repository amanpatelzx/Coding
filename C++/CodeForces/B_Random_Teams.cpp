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

    ll mini = n/m;
    ll maxi = n - (m-1);
    ll rem = n % m;
    ll tmp = mini;
    tmp++;
    mini = (m-rem)*(mini*(mini-1)/2);
    mini += rem*(tmp*(tmp-1)/2);
    
    maxi = (maxi*(maxi-1)/2);
    cout<<mini<<" "<<maxi<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}