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
ll lcm(ll a, ll b){
    return a/(__gcd(a,b))*b;
}
void solve(){
    ll n; cin>>n;
    vi fact;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            fact.PB(i);
            if(i != 1) fact.PB(n/i);
        }
    }
    ll a,b;
    ll last = INT_MAX;
    for(int i = 0; i < fact.size(); i++){
        if(lcm(fact[i], n - fact[i]) < last){
            a = fact[i];
            b = n - fact[i];
            last = lcm(fact[i], n - fact[i]);
        }
    }
    if(a > b) swap(a,b);
    cout<<a<<" "<<b<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}