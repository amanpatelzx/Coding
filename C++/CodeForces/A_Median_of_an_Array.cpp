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
    int n;
    cin>>n;
    vector<int> v(n);
    For(i,0,n-1) cin>>v[i];
    sort(v.begin(),v.end());
    int idx = ceil((n*1.0)/2);
    int res = 1;
    for(int i = idx; i < n; i++){
        if(v[i] == v[idx-1]) res++;
    }
    cout<<res<<"\n";
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