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
    int n,k; cin>>n>>k;
    vi v(n+1); For(i,1,n+1) cin>>v[i];
    
    vector<vector<int>> arr(k+1);
    for(int i = 1; i <= n; i++){
        arr[v[i]].PB(i);
    }
    int start = 0, end = n;
    for(int i = 1; i <= k; i++){
        arr[i].PB(n+1);
    }
    // for(int i = 1; i <= k; i++){
    //     for(int j = 0; j < arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<'\n';
    vector<vector<int>> brr(k+1);
    for(int i = 1; i <= k; i++){
        for(int j = 0; j < arr[i].size(); j++){
            if(j == 0){
                brr[i].PB(arr[i][j] - start-1);
            }
            else{
                brr[i].PB(arr[i][j] - arr[i][j-1] - 1);
            }
        }
    }
    for(int i = 1; i <= k; i++){
        sort(brr[i].rbegin(), brr[i].rend());
    }
    // for(int i = 1; i <= k; i++){
    //    for(int j = 0; j < brr[i].size(); j++){
    //        cout<<brr[i][j]<<" ";
    //    }
    //    cout<<"\n";
    // }
    // cout<<"\n";
    int res = INT_MAX;
    for(int i = 1; i <= k; i++){
        int a = brr[i][0];
        int b = 0;
        if(brr[i].size() > 1) b = brr[i][1];
        res = min(res, max(a/2,b));
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