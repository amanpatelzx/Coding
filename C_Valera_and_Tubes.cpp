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
    int n, m, k; cin>>n>>m>>k;
    
    vector<vector<pi>> v(n,vector<pi>(m,{0,0}));
    For(i,0,n-1){
        For(j,0,m-1){
            v[i][j] = {i+1,j+1};
        }
    }
    For(i,0,n-1){
        if(i % 2 == 1){
            reverse(v[i].begin(),v[i].end());
        }    
    }
    vector<pi> arr;
    For(i,0,n-1) For(j,0,m-1) arr.PB(v[i][j]);
    int t = m*n/k;
    int i = 0;
    for(i = 0; i < k-1; i++){
        cout<<t<<" ";
        for(int j = i*t; j < t*i+t; j++){
            cout<<arr[j].F<<" "<<arr[j].S<<" ";
        }
        cout<<'\n';
    }
    cout<<m*n-i*t<<" ";
    for(int j = i*t; j < m*n; j++){
        cout<<arr[j].F<<" "<<arr[j].S<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
}