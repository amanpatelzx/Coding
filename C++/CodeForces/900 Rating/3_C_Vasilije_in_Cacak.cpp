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
    ll n,k,x;
    cin>>n>>k>>x;

    ll a = (k*(k+1))/2;
    ll b = ((k)*(2*n -k+1))/2;

    if(x < a) cout<<"NO\n";
    else{
        if(x > b) cout<<"NO\n";
        else cout<<"YES\n";
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

