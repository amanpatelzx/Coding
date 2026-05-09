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
    vector<ll> v(n);

    for(int i= 0; i < n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    ll mex = 1;
    ll maxi = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == mex) mex++; 
        maxi = max(maxi , v[i]);
    }
    if(mex < maxi){
        cout<<n*maxi<<"\n";
    }
    else{
        maxi = 0;
        mex = 1;
        ll res = 0;
        for(int i = 0; i < n ; i++){
            if(v[i] == mex) mex++;
            maxi = max(maxi ,v[i]);
            res += maxi + mex;

        }
        cout<<res<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}