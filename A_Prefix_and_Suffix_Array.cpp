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
    vector<string> v(2*n-2);
    for(int i = 0; i < (2*n-2); i++) cin>>v[i];
    
    string a = "0",b;
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() == (n-1)){
            if(a == "0") a = v[i];
            else b = v[i];
        }
    }
    
    reverse(a.begin(),a.end());
    if(a == b) cout<<"YES\n";
    else cout<<"NO\n";


    // string ans = res;
    // reverse(ans.begin(), ans.end());
    // if(res == ans) cout<<"YES\n";
    // else cout<<"NO\n";

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