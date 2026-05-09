#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    ll n;
    cin>>n;
    if(n % 2 == 0){
        cout<<n/2<<" "<<n/2<<"\n";
        return;
    }
    ll temp = n-1;
    vector<ll> fac;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            fac.push_back(i);
        }
        if(i*i != n){
            fac.push_back(n/i);
        }
    }
    ll a = 1 ,b = n-1;
    for(int i = 0; i < fac.size(); i++){
        ll newLcm = ((n-fac[i]) /__gcd(n-fac[i], fac[i])) * fac[i];
        if(newLcm < temp){
            a = n-fac[i];
            b = fac[i];
            temp = newLcm;
        }
    }
    cout<<a<<" "<<b<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}