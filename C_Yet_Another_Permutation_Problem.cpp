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

    vector<bool> v(n+2,false);
    cout<<1<<" ";
    For(i,2,n){
        if(!v[i]){
            ll val = i;
            cout<<val<<" ";
            v[val] = 1;
            ll j = 2;
            // while((int)pow(val,j) <= n && !v[(int)pow(val,j)]){
            //     ll temp = (int)pow(val,j);
            //     cout<<temp<<" ";
            //     v[temp] = 1;
            //     j++;
            // }
            if(j == 2){
                while(val * 2 <= n && !v[val*2]){
                    val *= 2;
                    cout<<val<<" ";
                    v[val] = 1;
                }
            }
        }
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