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
    int minDiff = INT_MAX;
    while(m--){
        int x,y; cin>>x>>y;
        minDiff = min(minDiff, abs(x-y) + 1);
    }
    cout<<minDiff<<"\n";
    for(int i = 0; i < n; i += minDiff){
        for(int j = 0; j < minDiff && (j+i < n); j++){
            cout<<j<<" ";
        }
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}