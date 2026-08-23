#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    int n; 
    cin >> n;
    vl h(n);
    
    ll max_h = -1;
    int max_idx = -1;

    for(int i = 0; i < n; i++){
        cin >> h[i];
        if(h[i] > max_h){
            max_h = h[i];
            max_idx = i;
        }
    }

    vl p(n);
    for(int i = 0; i < n; i++){
        p[i] = h[(max_idx + 1 + i) % n];
    }

    vl L(n, 0), R(n, 0);

    vector<pair<ll, int>> stL;
    ll current_sumL = 0;
    for(int i = 0; i < n; i++){
        L[i] = current_sumL;
        ll val = p[i];
        int count = 1;
  
        while(!stL.empty() && stL.back().first <= val){
            current_sumL -= stL.back().first * stL.back().second;
            count += stL.back().second;
            stL.pop_back();
        }
        stL.push_back({val, count});
        current_sumL += val * count;
    }

    vector<pair<ll, int>> stR;
    ll current_sumR = 0;
    for(int i = n - 1; i >= 0; i--){
        R[i] = current_sumR;
        if(i > 0){
            ll val = p[i-1];
            int count = 1;
            
            while(!stR.empty() && stR.back().first <= val){
                current_sumR -= stR.back().first * stR.back().second;
                count += stR.back().second;
                stR.pop_back();
            }
            stR.push_back({val, count});
            current_sumR += val * count;
        }
    }

    vl res(n);
    for(int i = 0; i < n; i++){
        int orig_idx = (max_idx + 1 + i) % n;
        res[orig_idx] = L[i] + R[i];
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << "\n";
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