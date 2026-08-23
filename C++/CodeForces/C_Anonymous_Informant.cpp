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
    int n, k; cin>>n>>k;
    vi v(n);
    For(i,0,n-1) cin>>v[i];

    int posi = n;
    k = min(k, n);
    for(int i = 1; i <= k; i++){
        int val = v[posi-1];
        if(val > n){
            cout<<"No\n";
            return;
        }
        else{
            posi -= val;
            if(posi <= 0) posi += n;
        }
    }
    cout<<"Yes\n";
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