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
    vector<int> v(n);
    for(int i =0; i<n; i++) cin>>v[i];

    for(int i = 0; i < n; i++){
        v[i] = abs(v[i] - (i+1));
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            ans = __gcd(ans, v[i]);
        }
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