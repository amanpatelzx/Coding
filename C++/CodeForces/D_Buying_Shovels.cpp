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
    ll n, k; cin>>n>>k;
    vector<ll> fact;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            fact.PB(i);
            fact.PB(n/i);
        }
    }
    sort(fact.rbegin(), fact.rend());
    ll maxi;
    for(int i = 0; i < fact.size(); i++){
        if(fact[i] <= k){
            maxi = fact[i];
            break;
        }
    }
    ll res = n/maxi;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}