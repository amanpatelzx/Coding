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
    unordered_set<ll> s;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(!s.count(x)) s.insert(x);
    }
    if(s.size() < n) cout<<"YES\n";
    else cout<<"NO\n";

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