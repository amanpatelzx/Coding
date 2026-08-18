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

int n;
int dp[100007];
int f(vi &v , int i){
    if(dp[i] != -1) return dp[i];
    int res = 1;
    for(int j = 1; j * j <= i; j++){
        if(i % j != 0) continue;
        int k = i / j;
        if(j != i && v[j] < v[i]){
            res = max(res, 1 + f(v , j));
        }
        if(k != i && k != j && v[k] < v[i]){
            res = max(res, 1 + f(v, k));
        }
    }
    return dp[i] = res;
}

void solve(){
    cin>>n;
    vi v(n+1); for(int i = 1; i <= n; i++) cin>>v[i];
    memset(dp, -1, sizeof(dp));
    int res = 1;
    for(int i = 1; i <= n; i++){
        res = max(res, f(v , i));
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}