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
    int n; cin>>n;
    vector<pi> v(n);
    For(i , 0, n-1){
        cin>>v[i].F;
        cin>>v[i].S;
    }
    bool ok = 0;
    For(i,1,n-1){
        if(v[i].F >= v[0].F && v[i].S >= v[0].S){
            ok = 1;
            break;
        }
    }
    if(ok) cout<<-1<<'\n';
    else cout<<v[0].F<<'\n';
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