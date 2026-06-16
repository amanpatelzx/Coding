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
    vector<vi> res(n, vi(m));

    if(m % 2 == 0){
        int cnt = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[i][j] = cnt;
                cnt++;
            }
        }
    }
    else if(n % 2 == 0){
        int cnt = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                res[j][i] = cnt;
                cnt++;
            }
        }
    }
    else{
        int cnt = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[i][j] = cnt;
                cnt++;
            }
        }
        int i = 0;
        while(i < n-2){
            swap(res[i],res[i+1]);
            swap(res[i],res[i+2]);
            i += 2;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout<<res[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
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