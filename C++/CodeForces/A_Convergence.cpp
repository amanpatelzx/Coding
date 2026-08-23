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
    vl v(n);
    For(i,0,n-1) cin>>v[i];
    sort(v.begin(),v.end());
    if(v[0] == v[n-1]){
        cout<<0<<"\n";
        return;
    }
    ll mid = (n-1)/2;
    ll i = mid-1, j = mid+1;
    while(i >= 0 && v[i] == v[mid]){
        i--;
    }
    while(j < n && v[j] == v[mid]){
        j++;
    }
    ll left = n-j;
    ll right = i+1;
    cout<<max(left,right)<<'\n';
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