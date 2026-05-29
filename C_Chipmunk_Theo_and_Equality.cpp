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
     vector<int> V(n);
     For(i,0,n-1) cin>>V[i];
     vector<vector<int>> v;
     For(i,0,n-1){
        int a = V[i];
        vector<int> temp;
        while(a != 1){
            temp.PB(a);
            if(a%2 == 1) a++;
            else a /= 2;
        }
        if(a == 1) temp.PB(a);
        if(V[i] == 1) temp.PB(2);
        // reverse(temp.begin(),temp.end());
        v.PB(temp);
     }
     int res = INT_MAX;
     For(i,0,(int)v[0].size()-1){
        int ans = 0;
        bool mark = 0;
        For(j,0,(int)v.size()-1){
            bool ok = 0;
            For(k,0,(int)v[j].size()-1){
                if(v[j][k] == v[0][i]){
                    ok = 1;
                    ans += k;
                    break;
                }
            }
            if(!ok){
                mark = 1;
                break;
            }
        }
        if(!mark) res = min(res, ans);
     }
     cout<<res<<'\n';
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