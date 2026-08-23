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
 /*
    For n = 1 -> we know there is 7 way to make sum = 6 -> 1,2,3 and 2,2,2,
    permulte 1,2,3 -> 3! + 1 = 7;
    and we know there is 3n point on a circle , so each point has 3 way to choose
    so totol 3^(3n
    so we know for a single equalilateral traigle  there is 7 way to not fill that postion
    if there is n triangle , then there is 7^n way to not fill that positon
    so required way -> 3^(3n) - 7^n;
 */
ll f(ll a, ll b, ll M){
    if(b == 0) return 1%M;
    if(b == 1) return a%M;
    ll tt = f(a,b/2, M) % M;
    tt = (tt*tt) % M;
    if(b & 1) tt = (tt*a) % M;
    return tt%M;
}
void solve(){
    ll n; cin>>n;
    ll M = 1000000007;

    cout<<(f(3,3*n,M) - f(7,n,M) + M)%M<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}