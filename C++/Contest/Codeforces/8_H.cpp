#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        ll x = n*(n+1)/2;
        ll ans = x*x - x*(2*n+1)/3;
        cout<<ans<<"\n";
    }
}