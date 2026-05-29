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
    vl v1(n), v(n);
    For(i,0,n-1) cin>>v1[i];
    v = v1;
    sort(v.begin(),v.end());
    vl pref(n);
    pref[0] = v[0];
    For(i,1,n-1) pref[i] = v[i] + pref[i-1];
    vl diff(n);
    For(i,0,n-2){
        diff[i] = pref[i] - v[i+1];
    }
    UM<ll,ll> mp;
    For(i,0,n-2){
        if(diff[i] < 0){
            mp[v[i]] = i;
        }
        int prev = i;
        while(i < n-1 && diff[i] >= 0) i++;
        For(j,prev,i){
            mp[v[j]] = i;
        }
    }
    mp[v[n-1]] = n-1;

    For(i,0,n-1){
        cout<<mp[v1[i]]<<" ";
    }
    cout<<"\n";
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