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
    ll n,k,x; cin>>n>>k>>x;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vl arr;
    for(int i =1; i < n; i++){
        if(v[i] - v[i-1] > x) arr.PB(v[i] - v[i-1]);
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        ll req = 0;
        ll diff = arr[i];
        req = (diff-1)/x;
        if(req <= k){
            arr[i] = 0;
            k -= req;
        }
    }
    int cnt = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]) cnt++;
    }
    cout<<cnt+1<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}