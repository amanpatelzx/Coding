#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int> v(n+1);
    v[0] = 0;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, v[i] - v[i-1]);
    }
    ans = max(ans , 2*(x - v[n]));
    cout<<ans<<"\n";
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