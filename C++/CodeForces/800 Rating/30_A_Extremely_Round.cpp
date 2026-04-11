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
    int n;
    cin>>n;
    
    int ans = 0;
    if(n < 10) ans += n;
    if(n >= 10 && n < 100){
        ans += 9;
        ans += n / 10;
    }
    if(n >= 100 && n < 1000){
        ans += 18;
        ans += n / 100;
    }
    if(n >= 1000 && n < 10000){
        ans += 9*3;
        ans += n / 1000;
    }
    if( n >= 10000 && n < 100000){
        ans += 9*4;
        ans += n / 10000;
    }
    if( n >= 100000 && n < 1000000){
        ans += 9*5;
        ans += n / 100000;
    }
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

