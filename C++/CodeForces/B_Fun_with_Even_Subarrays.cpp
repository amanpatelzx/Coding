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
    int i = n-2;
    int res = 0;
    while(i >= 0){
        if(v[i] != v[i+1]){
            int dis = n-i-1;
            int k = dis;
            for(int j = max(0,i-k+1); j <= i; j++) v[j] = v[n-1];
            i -= k;
            res++;
        }
        else{
            i--;
        }
    }
    // For(i,0,n) cout<<v[i]<<" ";
    // cout<<" -> ";
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}