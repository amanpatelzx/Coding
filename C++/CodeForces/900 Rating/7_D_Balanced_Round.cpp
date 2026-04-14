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

    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    sort(v.begin(),v.end());

    int result = 1;
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] <= k){
            cnt++;
            result = max(result, cnt);
        }
        else cnt = 1;
    }
    int ans = n - result;
    cout<<ans<<"\n";
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