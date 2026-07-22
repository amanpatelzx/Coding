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
#define For(i,a,b) for (int i = a; i < b; i++)
 
void solve(){
    int n; cin>>n;
    vl v(n); for(int i =0; i < n; i++) cin>>v[i];
    vector<pl> arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = {v[i], i+1};
    }
    sort(arr.begin(), arr.end());
    ll res = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i].F*arr[j].F >= 2*n) break;
            if(arr[i].F*arr[j].F == arr[i].S + arr[j].S) res++;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}