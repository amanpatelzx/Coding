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
    vector<vi> v(n, vector<int>(n));
    vector<vi> res;
    // int a = n, b = (n+1)/2, x = 2*n - (a+b) - 1;
    for(int i = n-1; i >= 0; i--){
        // cout<<1<<' '<<i+1<<" ";
        // for(int j = 1; j <= n; j++) cout<<j<<" ";
        // cout<<"\n";
        res.PB({1,i+1});
        res.PB({2,i+1});
        for(int j = 0; j < n; j++){
            v[i][j] = j+1;
        }
        for(int j = 0; j < n; j++){
            v[j][i] = j+1;
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // cout<<v[i][j]<<" ";
            sum += v[i][j];
        }
        // cout<<"\n";
    }
    // cout<<'\n';
    int m = res.size();
    cout<<sum<<" "<<m<<"\n";
    for(int i = 0; i < m; i++){
        cout<<res[i][0]<<" "<<res[i][1]<<" ";
        for(int j = 0; j < n; j++) cout<<j+1<<" ";
        cout<<"\n";
    }
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
