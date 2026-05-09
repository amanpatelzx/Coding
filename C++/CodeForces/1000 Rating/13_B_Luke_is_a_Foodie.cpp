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
    ll n,x;
    cin>>n;
    cin>>x;
    vector<ll> v(n);
    for(int i  =0 ;i < n; i++) cin>>v[i];

    int res = 0;
    ll mini = v[0];
    ll maxi = v[0];
    for(int i = 1; i < n; i++){
        mini = min(mini , v[i]);
        maxi = max(maxi , v[i]);
        if(maxi - mini > 2LL*x){
            res++;
            mini = v[i];
            maxi = v[i];
        }
    }
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