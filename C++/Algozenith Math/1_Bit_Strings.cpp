//https://cses.fi/problemset/task/1617
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bin_exp(ll a, ll b, ll M){
    if(b == 0) return 1;
    ll res = bin_exp(a, b/2, M);
    res = (res * res) % M;
    if(b % 2 == 1) res = (res*a) % M;
    return res;
}
int main(){
    ll n; cin>>n;
    ll ans = bin_exp(2,n,1000000007);
    cout<<ans<<'\n';
}