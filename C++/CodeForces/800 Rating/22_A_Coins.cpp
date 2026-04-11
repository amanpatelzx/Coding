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
    ll n,k;
    cin>>n>>k;
    if(n % 2 == 1){
        if((n-k) % 2 != 0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    else{
        cout<<"YES\n";
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

