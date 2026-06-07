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
    int n, m; cin>>n>>m;

    // vector<vector<int>> v(n,vector<int>(m));

    // vi arr(n);
    // For(i,0,n-1) arr[i] == i;
    
    int res = 0;
    if(n >= m){
        if(m == 1) res = 0;
        else res = m;
    }
    else{
        res = n+1;
    }
    cout<<res<<"\n";
    
    int start = 0;
    For(i , 0 , n-1){
        start++;
        if(start == m || start == 0) start = 1;
        For(j , 0 , m-1){
            cout<<((start + j) % m)<<" ";
        }
        cout<<"\n";
    }
    // For(i,0,n-1){
        //     For(j,0,m-1) cout<<v[i][j]<<" ";
        //     cout<<'\n';
    // }
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