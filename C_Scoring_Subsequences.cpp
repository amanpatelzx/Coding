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
#define For(i,a,b) for (int i = a; i <= b; i++)z        

void solve() {
    ll n; cin>>n;
    vl v(n);
    For(i,0,n-1) cin>>v[i];

    int d = 1;
    cout<<1<<" ";

    For(i,1,n-1){
        if(v[i-d] >= d+1){
            d++;
        }
        cout<<d<<" ";
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