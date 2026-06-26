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
    int m = n*(n-1)/2;
    vl v(m);
    For(i,0,m) cin>>v[i];

    //let arr = a1,a2,a3....an
    sort(v.begin(),v.end());
    //choose i think -> start me n-1 repeat then n-1, n-2 .. 
    int jump = n-1;
    int i = 0;
    while(i < m){
        cout<<v[i]<<" ";
        i += jump;
        jump--;
    }
    cout<<v[m-1]<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}