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
    for(int i = 0; i < n; i++) cin>>v[i];
    if(n % 2 == 1){
        cout<<"NO\n";
        return;
    }
    sort(v.begin(), v.end());

    vl res;
    int i = 0, j = n-1;
    for(int i = 0;  i < n/2; i++){
        res.push_back(v[i]);
        res.PB(v[i+n/2]);
    }
    bool ok = 0;
    for(int i = 0; i < n; i++){
        int left = i-1, right = i+1;
        if(i == 0) left = n-1;
        if(i == n-1) right = 0;
        if(!((res[i] > res[left] && res[i] > res[right]) || (res[i] < res[left] && res[i] < res[right]))){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i = 0; i < n; i++) cout<<res[i]<<" ";
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