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
    sort(v.begin(), v.end());
    ll res = 0;
    ll x = 0;
    int low = 0, high = n-1;
    while(low < high){
        ll req = v[high] - x;
        
        if(v[low] <= req){
            x += v[low];
            res += v[low];
            low++;
        }
        else{
            v[low] -= req;
            x += req;
            res += req; 
        }
        if(v[high] == x){
            res++;
            x = 0;
            high--;
        }
    }
    if(low == high){\
        ll temp = 0;
        //1 1 1 1 1 1
        ll val = v[low];
        temp = (val-x+1)/2;
        res += min(v[low], temp+1);
    }
    cout<<res<<"\n";
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