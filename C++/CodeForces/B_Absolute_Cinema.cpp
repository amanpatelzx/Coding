#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    ll n; cin>>n;
    ll maxi = INT_MIN;
    ll sum  =0;
    vector<ll> a(n),b(n);
    for(int i = 0; i< n;i++) cin>>a[i];
    for(int i = 0; i< n;i++) cin>>b[i];
    
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) swap(a[i],b[i]);
    }
    for(int i = 0; i < n; i++){
        sum += b[i];
        maxi = max(maxi, a[i]);
    }
    cout<<sum+maxi<<'\n';
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