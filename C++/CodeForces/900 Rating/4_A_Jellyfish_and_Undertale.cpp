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
    ll a, b,n;
    cin>>a>>b>>n;
    vector<ll> v(n);
    for(int i  =0; i < n; i++) cin>>v[i];
 
    ll sum = b;
    for(int i = 0; i < n; i++){
        sum += min(v[i], a-1);
    }
    cout<<sum <<"\n";
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