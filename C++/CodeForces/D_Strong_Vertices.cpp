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
    vl a(n), b(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];
    
    vl diff(n);
    for(int i = 0; i < n; i++){
        diff[i] = a[i] - b[i];
    }
    ll maxDiff = -1e15;
    for(int i = 0; i < n; i++){
        maxDiff = max(maxDiff , diff[i]);
    }
    vl ans;
    for(int i = 0; i < n; i++){
        if(diff[i] == maxDiff){
            ans.PB(i+1);
        }
    }
    cout<<ans.size()<<"\n";
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}