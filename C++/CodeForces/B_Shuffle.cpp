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
    ll n, x, m; cin>>n>>x>>m;
    bool ok = 0, mark = 0;
    int L,R;
    for(int i = 0; i < m; i++){
        int l , r; cin>>l>>r;
        if(!ok){
            if(x >= l && x <= r){
                L = l;
                R = r;
                ok = 1;
            }
        }
        else{
            if(L > r || R < l){
                continue;
            }
            else{
                L = min(L, l);
                R = max(R, r);
            }
        }
    }
    if(!ok){
        cout<<1<<"\n";
        return;
    }
    cout<<R-L+1<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}