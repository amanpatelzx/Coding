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
    ll w, h;
    cin>>w>>h;
    vector<pair<ll,ll>> v(4);
    ll x;
    for(int i = 0; i < 4; i++){
        ll k;
        cin>>k;
        ll f = INT_MAX, s = 0;
        for(int i = 0; i < k; i++){
            cin>>x;
            f = min(f,x);
            s = max(s, x);
        }
        v[i] = {f,s};
    }
    ll res = 0;
    res = max(res, (v[0].second - v[0].first)*h);
    res = max(res, (v[1].second - v[1].first)*h);
    res = max(res, (v[2].second - v[2].first)*w);
    res = max(res, (v[3].second - v[3].first)*w);

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