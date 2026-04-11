#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair


void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a == b && a == n) cout<<"YES\n";
    else if(a+b < n-1) cout<<"YES\n";
    else cout<<"NO\n";
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

