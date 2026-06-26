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
    // abs(a-b) + abs(a-c) + abs(a-d) = abs(3*a - (b+c+d)) -> is this true?
    //eg -> abs(5-6) + abs(5-3) = abs(2*5 - (6+3)) => 1 + 2 = 1; nhi bhai ye kam nahi karenga :)
    //what would be TC -> m*(n-1) + m*(n-2) + m*(n-3) ... m.1
    // -> m*(n - (n*(n+1)/2)), i think avg = m = 5000, n = 500, there is n3 so this will not work

    //one more observation ->  i can make pref of abs diff;
    int n, m; cin>>n>>m;
    vector<vector<ll>> v(n,vl(m));
    For(i,0,n){
        For(j,0,m){
            cin>>v[i][j];
        }
    }
    vector<vl> arr(m,vl(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = v[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        sort(arr[i].begin(), arr[i].end());
    }
    ll res = 0;
    for(int i = 0; i < m; i++){
        vl pref(n, 0);
        pref[0] = arr[i][0];
        for(int j = 1; j < n; j++){
            pref[j] = pref[j-1] + arr[i][j];
        }
        for(int j = 1; j < n; j++){
            res += ((ll)j*arr[i][j]) - pref[j-1];
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