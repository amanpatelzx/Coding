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
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n*k+1);
    for(int i = 1; i <= n*k; i++) cin>>v[i];
    ll res = 0;
    int idx = n/2;
    for(int i = n*k-idx; i >= 1; i -= idx+1){
        res += v[i];
        cout<<v[i]<<" ";
    }
    // cout<<"\n";
    // cout<<"res -> ";
    cout<<res<<"\n";
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