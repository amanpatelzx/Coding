//https://codeforces.com/problemset/problem/630/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bin_exp(ll a, ll b){
    if(b == 0) return 1;
    ll res = bin_exp(a, b/2);
    res = (res * res);
    if(b % 2 == 1) res = (res*a);
    return res;
}
int main(){
    ll n; cin>>n;
    ll res = 0;
    for(ll i = 1; i <= n; i++){
        // res += bin_exp(2,i);
        res += (1LL << i);
    }
    cout<<res<<"\n";
}