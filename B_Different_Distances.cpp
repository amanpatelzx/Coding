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

    for(int i = 1; i <= n; i++) cout<<i<<" ";
    for(int i = 1; i <= n; i++) cout<<i<<" ";
    if(n % 2 == 0){
        for(int i = n; i >= 1; i--) cout<<i<<' ';
    }
    else{
        int mid = (n+1)/2;
        for(int i = n; i >= 1; i--){
            if(i == mid) cout<<i+1<<" ";
            else if(i == mid+1) cout<<i-1<<" ";
            else cout<<i<<" ";
        }
    }
    for(int i = 1; i <= n; i++) cout<<i<<' ';
    cout<<"\n";
    

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