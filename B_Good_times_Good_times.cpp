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
vl v;
void f(ll i, ll j, ll curr, int cnt){
    if(cnt > 10) return;
    ll val = curr*10LL+i;
    ll val2 = curr*10LL+j;
    if(val >= 2) v.PB(val);
    if(val2 >= 2) v.PB(val2);
    f(i,j,val,cnt+1);
    f(i,j,val2,cnt+1);
    return;
}
void solve(){
    ll n; cin>>n;
    auto check = [&](ll val){
        US<ll> s;
        while(val){
            s.insert(val%10);
            val/=10;
            if(s.size() > 2) break;
        }
        if(s.size() <= 2) return 1;
        return 0;
    };
    
    int m = v.size();
    //cout<<m<<'\n';
    for(int i = 0; i < m; i++){
        ll val = n*v[i];
        if(val <= 1000000000){
            if(check(val)){
                cout<<v[i]<<"\n";
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    for(ll i = 0; i < 10; i++){
        for(ll j = 0; j < 10; j++){
            f(i,j,0,0);
        }
    }
    cin>>_; while(_--)
    solve();
}