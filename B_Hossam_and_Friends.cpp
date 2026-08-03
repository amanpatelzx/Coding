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
    ll n, m; cin>>n>>m;
    vector<vi> v(m,vi(2));
    for(int i = 0; i < m; i++){
        int a,b; cin>>a>>b;
        if(a > b) swap(a,b);
        v[i][0] = a;
        v[i][1] = b;
    }
    if(m == 0){
        ll res =( n*(n+1))/2;
        cout<<res<<"\n";
        return;
    }
    sort(v.begin(),v.end());
    vi arr(m);
    vi suff(m);
    suff[m-1] = v[m-1][1];
    for(int i = m-2; i >= 0; i--){
        suff[i] = min(suff[i+1], v[i][1]);
    }
    for(int i = 0; i < m; i++){
        arr[i] = v[i][0];
    }
    ll res = 0;
    for(int i = 1; i <= n; i++){
        auto it = lower_bound(arr.begin(), arr.end(), i);
        int end = n;
        if(it != arr.end()) end = suff[it - arr.begin()] - 1;
        res += (end - i + 1);
        
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