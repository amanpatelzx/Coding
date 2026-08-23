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

lll gcd(lll a, lll b){
    if(a == 0) return b;
    return gcd(b % a, a);
}
lll lcm(lll a, lll b){
    return a/gcd(a,b)*b;
}
void solve(){
    ll n; cin>>n;
    vl v(n); For(i,0,n) cin>>v[i];
    lll evenLCM = 1, oddLCM = 1;
    for(int i = 0; i < n; i++){
        if(i&1){
            if(i != 1) oddLCM = gcd(oddLCM, (lll)v[i]);
            else oddLCM = v[i];
        }
        else{
            if(i != 0) evenLCM = gcd(evenLCM, (lll)v[i]);
            else evenLCM = v[i];
        }
    }
    bool even = 1;
    bool odd = 1;
    ll ODD = (ll)oddLCM;
    ll EVEN = (ll)evenLCM;
    for(int i = 0; i < n; i++){
        if(i & 1){
            if(v[i] % EVEN == 0){
                even = 0;
            }
        }
        else{
            if(v[i] % ODD == 0){
                odd = 0;
            }
        }
    }
    // cout<<ODD<<" "<<EVEN<<" -> ";
    if(even){
        cout<<EVEN<<"\n";
        return;
    }
    else if(odd){
        cout<<ODD<<"\n";
        return;
    }else{
        cout<<0<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}