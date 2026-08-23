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
    int n, m; cin>>n>>m;
    vl v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    vector<vl> a(n, vl(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
        sort(a[i].rbegin(), a[i].rend());
    }
    int res = m;
    vl ans;
    for(int k = n-1; k >= 0; k--){
        vl tt;
        int i = 0, j = 0;
        while((i < ans.size() || j < m) && tt.size() < m){
            if(i < ans.size() && (ans[i] >= a[k][j])){
                tt.push_back(ans[i]);
                i++;
            }
            else{
                tt.push_back(a[k][j]);
                j++;
            }
        }
        ans = tt;
        ll sum = 0;
        for(int i = 0; i < ans.size(); i++){
            sum += ans[i];
            if(sum >= v[k]){
                res = min(res, i+1);
                break;
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