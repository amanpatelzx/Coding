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
    vl odd(n), even(n), diff(n);
    for(int i = 0; i < n; i++){
        if(i&1){
            even[i] = even[i-1] + v[i];
            if(i-1 >= 0) odd[i] = odd[i-1];
        }
        else{
            if(i) odd[i] = odd[i-1] + v[i];
            else odd[i] = v[i];
            if(i-1 >= 0) even[i] = even[i-1];
        }
        diff[i] = even[i] - odd[i];
    }
    set<ll>s;
    s.insert(0);
    for(int i = 0; i < n; i++){
        if(s.count(diff[i])){
            cout<<"YES\n";
            return;
        }
        s.insert(diff[i]);
    }
    cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}