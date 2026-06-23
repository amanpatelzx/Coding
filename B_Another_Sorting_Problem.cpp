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
 
void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<ll> c(n);
    c = a;
    sort(c.begin(), c.end());
    for(int i = 0; i < n; i++) {
        if(b[i] < c[i]) {
            cout << -1 << endl;
            return;
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            int idx = -1;
            for(int j = i+1; j < n; j++) {
                if(a[j] <= b[i]) {
                    idx = j;
                    break;  
                } 
            }
            for(int j = idx; j > i; j--) {
                swap(a[j], a[j-1]);
                ans++;
            }
        }
    }
    cout << ans << endl;
    
}
 
int main() {
    fastIO();
 
    int t; 
    cin >> t;
    while(t--){ 
        solve();
    }
 
    return 0;
}