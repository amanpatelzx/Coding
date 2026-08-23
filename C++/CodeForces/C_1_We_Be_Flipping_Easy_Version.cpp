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
    vector<ll> v(n);
    For(i,0,n-1) cin>>v[i];
    vector<int> res;
    bool ok = 0;
    for(int i = n-1; i >= 0; i--){
        if(v[i] > 0 && !ok){
            res.PB(i+1);
            if(ok == 1) ok = 0;
            else ok =1;
        }
        else if(v[i] < 0 && ok){
            res.PB(i+1);
            if(ok == 1) ok = 0;
            else ok =1;
        }
    }
    cout<<res.size()<<"\n";
    for(auto &ele : res) cout<<ele<<' ';
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