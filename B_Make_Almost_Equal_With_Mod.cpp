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
    int n; cin>>n;
    vl v(n); For(i,0,n) cin>>v[i];
    ll k = 1;
    for(int i = 1; i < 60; i++){
        k = k*2;
        US<ll> s;
        for(int j = 0; j < n; j++){
            ll rem = v[j] % k;
            s.insert(rem);
        }
        if((int)s.size() == 2){
            cout<<k<<'\n';
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}