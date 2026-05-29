#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
ll val = 100;
vector<ll> prime;
void seive(){
    vector<bool> v(val,false);
    for(ll i = 2; i*i < val; i++){
        for(ll j = i*i; j < val; j += i){
            v[j] = true;
        }
    }
    for(ll i = 2; i < val; i++){
        if(!v[i]) prime.push_back(i);
    }
    for(int i = 0; i < prime.size(); i++) cout<<prime[i]<<' ';
}
void solve(){
    // ll n;
    // cin>>n;
    // auto it1 = lower_bound(prime.begin(),prime.end(), 1+n);
    // auto it2 = lower_bound(prime.begin(),prime.end(), n+prime[it1-prime.begin()]);
    // ll res = prime[it1-prime.begin()]*prime[it2-prime.begin()];
    // ll p = prime[it1-prime.begin()];
    // res = min(res, p*p*p);
    // cout<<res<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    seive();
    cin>>t;
    while(t--){
        solve();
    }
}