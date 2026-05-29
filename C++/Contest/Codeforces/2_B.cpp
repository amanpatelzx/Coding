#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef __int128_t lll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i = 0; i < n;  i++) cin>>v[i];
    ll maxi = 0;
    for(int i = 1; i < n ;i++){
        if(v[i] - v[i-1] < 0) maxi = max(maxi,v[i-1]-v[i]);
    }
    for(int i = 1; i < n ;i++){
        if(v[i] - v[i-1] < 0) {
            v[i] += maxi;
        }
        if(v[i] - v[i-1] < 0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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