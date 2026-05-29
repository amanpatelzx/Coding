#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef __int128_t lll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i = 0; i <n; i++){
        cin>>v[i];
    }
    ll mini = 0;
    for(int i = 0; i <n ; i++){
        ll a = v[i];
        while(a % 2 == 0) a/=2;
        mini = max(mini, a);
    }
    ll res = 0;
    for(int i = 0; i < n ;i++){
        ll a = v[i];
        if(a % 2 != 0){
            
        }
        while(a % 2 == 0) a/=2;
        mini = max(mini, a);
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