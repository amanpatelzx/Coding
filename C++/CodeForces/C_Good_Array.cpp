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
    vl v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    ll sum = 0;
    for(int i = 0; i < n; i++) sum += v[i];
    ll maxi1 = 0;
    for(int i = 0; i < n; i++) maxi1 = max(maxi1 ,v[i]);
    ll maxi2 = 0;
    ll freq = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == maxi1) freq++;
        if(v[i] != maxi1){
            maxi2 = max(maxi2, v[i]);
        }
    }
    if(freq > 1) maxi2 = maxi1;
    vl res;
    for(int i = 0; i < n; i++){
        if(v[i] == maxi1){
            if(sum - maxi2*2 - v[i] == 0) res.PB(i+1);
        }
        else{
            if(sum - maxi1*2 - v[i] == 0) res.PB(i+1);
        }
    }
    cout<<res.size()<<"\n";
    for(auto &ele : res) cout<<ele<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}