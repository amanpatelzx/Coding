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
#define For(i,a,b) for (int i = a; i < b; i++)
 
void solve(){
    ll n,m; cin>>n>>m;
    vl k(n), c(m);
    For(i,0,n) cin>>k[i];
    For(i,0,m) cin>>c[i];

    sort(k.rbegin(), k.rend());
    ll res = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(c[j] < c[k[i]-1]){
            res += c[j];
            j++;
        }
        else{
            res += c[k[i]-1];
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}