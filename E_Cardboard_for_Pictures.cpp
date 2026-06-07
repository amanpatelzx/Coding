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
    ll n ,c; cin>>n>>c;
    lll singleSum = 0;
    For(i,0,n-1){
        ll x; cin>>x;
        c -= x*x;
        singleSum += x; 
    }
    //equation -> n*(2*x)^2 + 4*(singleSum)*x - c = 0;
    // x = (-b +- sqrt(b*b - 4*a*c) ) / 2*a;

    lll a = n*4, b = 4*singleSum;
    c = -c;
    lll d = b*b - 4*a*c;
    d = d/(4*a*a);
    ll d1 = (ll)d;
    ll x1 = (ll)((-b/(2*a) + (ll)sqrt(d1)));
    ll x2 = (ll)(-b/(2*a) - (ll)sqrt(d1));
    if(x1 > 0) cout<<(ll)x1<<'\n';
    else cout<<(ll)x2<<"\n";
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