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
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];

    vl arr;
    for(int i = 0; i < n; i++){
        if(v[i] < (i+1)) arr.PB(v[i]);
    }
    sort(arr.begin(),arr.end());
    int m = arr.size();
    ll res = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < (i+1)){
            auto it = lower_bound(arr.begin(), arr.end(), i+2);
            if(it != arr.end()){
                int idx = it - arr.begin();
                ll len = m - idx;
                res += len;
            }
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