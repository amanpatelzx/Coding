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
    ll n; cin>>n;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vector<ll> arr;
    ll last = 1;
    for(ll i = 1; i < 34; i++){
        ll curr = (1LL << i);
        ll cnt = 0;
        for(int j = 0; j < n; j++){
            if(v[j] >= last && v[j] < curr) cnt++;
        }
        arr.PB(cnt);
        last = curr;
    }
    ll res = 0;
    for(int i = 0; i < arr.size(); i++){
        ll val = arr[i];
        res += (val*(val-1)/2);
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