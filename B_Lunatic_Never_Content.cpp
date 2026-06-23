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
    vi v(n); For(i,0,n) cin>>v[i];
    int res = 0;
    int i = 0, j = n-1;
    while(i < j){
        res = __gcd(res , abs(v[i] - v[j]));
        i++;
        j--;
    }
    if(res == 0){
        cout<<0<<"\n";
        return;
    }
    for(int i = 0; i < n; i++){
        v[i] %= res;
    }
    bool ok = 0;
    i = 0, j = n-1;
    while(i < j){
        if(v[i] != v[j]) ok = 1;
        i++;
        j--;
    }
    if(ok) cout<<0<<"\n";
    else cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}