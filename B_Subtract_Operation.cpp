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
    int n, k; cin>>n>>k;
    vi v(n); For(i,0,n) cin>>v[i];
    sort(v.begin(),v.end());
    
    //x-y = k;
    for(int i = 0; i < n; i++){
        int val = k + v[i];
        auto ans = binary_search(v.begin()+i+1, v.end(), val);
        if(ans){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}