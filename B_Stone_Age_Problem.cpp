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
    ll n,q; cin>>n>>q;
    vl v(n); For(i,0,n) cin>>v[i];
    ll sum = 0;
    ll A = 0;
    For(i,0,n) sum += v[i];
    map<ll,ll> mp;
    while(q--){
        ll t; cin>>t;
        if(t == 1){
            ll i, x; cin>>i>>x;
            if(A == 0){
                sum -= v[i-1];
                sum += x;
                v[i-1] = x;
                cout<<sum<<"\n";
            }
            else{
                if(!mp.empty() && mp.count(i)){
                    sum -= mp[i];
                    sum += x;
                    mp[i] = x;
                    cout<<sum<<"\n";
                }
                else{
                    sum -= A;
                    sum += x;
                    mp[i] = x;
                    cout<<sum<<'\n';
                }
               
            }
        }
        else{
            ll x; cin>>x;
            A = x;
            mp.clear();
            sum = n*x;
            cout<<sum<<"\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}