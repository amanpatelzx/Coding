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
    ll x,y,k;
    cin>>x>>y>>k;

    ll res = k;
    ll totST = y*k+k-1;
    //(x-1)*a = 2*k+1;
    ll a = ceil((totST+x-2)/(x-1));
    res += a;
    cout<<res<<'\n';
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