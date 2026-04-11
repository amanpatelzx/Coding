#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
const int MOD = 1e9+7;
const ll INF = 1e18;
 
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
 
ll power(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
 
int main() {
    fastIO();
 
    int t; 
    cin >> t;
    while(t--){
        
        int n; cin >> n;
 
        vector<ll> v(n);
 
        for(int i = 0; i < n; i++) cin >> v[i];
 
        while(v.size() > 1) {
            sort(v.begin(), v.end());
            ll a = v.back();   
            v.pop_back();      
            for(int i = 0; i < v.size(); i++) {
                v[i] ^= a;
            }
            
        }
 
        cout << v[0] << endl;
 
 
    }
 
    return 0;
}