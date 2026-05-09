#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
vector<ll> v;
#define limit 300006
void f(){
    for(int i = 1; i < limit; i++){
        v[i] = v[i-1]^i;
    }
}
void solve(){
    ll a,b;
    cin>>a>>b;

    ll x_or = 0;
    x_or = v[a-1];

    ll res = 0;
    if(x_or == b) res = a;
    else if((x_or^b) != a){
        res = a+1;
    }
    else{
        res = a+2;
    }

    cout<<res<<"\n";   
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    v.resize(limit);
    f();
    while(t--){
        solve();
    }
}