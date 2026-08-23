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
    ll n, m; cin>>n>>m;
    vl a(n), b(m);
    For(i,0,n-1) cin>>a[i];
    For(i,0,m-1) cin>>b[i];
 
    
    ll time = 0;
    ll idx = 0;
    ll j = 0;
    while(j < m && a[j] == b[j]){
        time++;
        idx++;
        j++;
    }
    US<ll> s;
    For(i,idx,m-1) s.insert(b[i]);
    for(ll i = n-1; i >= idx; i--){
        if(s.count(a[i])){
            time += 1 + 2*(i-idx) + m - idx - 1;
            break;
        }
    }
    cout<<time<<"\n";
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