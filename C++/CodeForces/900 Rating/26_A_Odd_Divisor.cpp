#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

// bool is_prime(ll n){
//     for(ll i = 2; i*i <= n; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
void solve(){
    ll n;
    cin>>n;

    // if(n <= 4) cout<<"NO\n";
    // else{
    //     if(is_prime(n)){
    //         cout<<
    //     }
    // }
    if((n & (n-1)) == 0) cout<<"NO\n";
    else cout<<"YES\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}