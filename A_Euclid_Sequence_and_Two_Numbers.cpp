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
    int n; cin>>n;
    vi v(n);
    For(i,0,n-1) cin>>v[i];
    sort(v.rbegin(),v.rend());
    bool ok = 0;
    for(int i = 2; i < n; i++){
        if(v[i-2] % v[i-1] != v[i]) ok = 1;
    }
    if(ok == 1){
        cout<<-1<<"\n";
        return;
    }
    else{
        cout<<v[0]<<" "<<v[1]<<"\n";
    }
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