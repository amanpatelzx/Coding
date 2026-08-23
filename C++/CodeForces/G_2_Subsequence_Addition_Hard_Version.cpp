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
    vl v(n); For(i,0,n) cin>>v[i];
    sort(v.begin(), v.end());
    vl pref(n);
    pref[0] = v[0];
    For(i,1,n){
        pref[i] = pref[i-1] + v[i];
    }
    if(n == 1){
        if(v[0] == 1){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    if (v[0] != 1){
        cout<<"NO\n";
        return;
    }
    for(int i = 1; i < n; i++){
        int val = v[i];
        if(val > pref[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}