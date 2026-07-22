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
    int n; cin>>n;
    vi v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    vi res;
    res.PB(v[0]);
    for(int i = 1; i < n-1; i++){
        if((v[i] > v[i-1] && v[i] > v[i+1]) || (v[i] < v[i-1] && v[i] < v[i+1])) res.PB(v[i]);
    }
    res.PB(v.back());
    int m = res.size();
    cout<<m<<"\n";
    for(int i = 0; i < m; i++) cout<<res[i]<<" ";
    cout<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}