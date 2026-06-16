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
    ll n; cin>>n;
    vl v(n);
    For(i,0,n-1) cin>>v[i];

    vl res(n);
    For(i,0,n-1){
        vl arr(n);
        For(j,0,n-1){
            int idx = (i + j) % n; 
            arr[j] = v[idx];
        }
        ll ans = 0;
        int maxiIdx = 0;
        for(int j = 0; j < n; j++){ 
            if(arr[j] > arr[maxiIdx]) maxiIdx = j;
        }
        ll leftMax = arr[0];
        for(int j = 1; j <= maxiIdx; j++){
            ans += leftMax;
            if(arr[j] > leftMax) leftMax = arr[j];
        }
        ll rightMax = arr[n-1];
        for(int j = n-1; j > maxiIdx; j--){
            ans += rightMax;
            if(arr[j-1] > rightMax) rightMax = arr[j-1];
        }
        res[i] = ans;
    }
    
    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
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