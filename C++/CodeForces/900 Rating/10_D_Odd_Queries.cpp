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
    ll n, q;
    cin>>n>>q;
    vector<ll> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];
    }

    vector<ll> pre(n);
    pre[0] = v[0];

    for(int i = 1; i < n;i ++){
        pre[i] = pre[i-1] + v[i];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        
        l--;
        r--;

        ll a = sum;
        int first = 0;
        if(l > 0) first = pre[l-1];
         a -= pre[r] -  first;
         a += (r-l+1)*k;
         if(a % 2 != 0) cout<<"Yes\n";
         else cout<<"No\n";
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