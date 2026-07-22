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
// lll f2(lll k, lll limit){
//     if(limit == 0) return 1;
//     return 1 + k*f2(k,limit-1);
// }
// bool f(lll k, lll n){
//     // n = 1 + k(1 + k(1+k*(1+k)...))
//     lll limit = 0;
//     lll tt = k;
//     while(tt < n){
//         tt *= k;
//         limit++;
//     }
//     for(lll i = 1; i < limit; i++){
//         lll val = 1 + k*f2(k, i);
//         if(val > n) return 0;
//         if(val == n) return 1;
//     }
//     return 0;

// } 
set<ll> s;
vector<ll> v;
void f(){
    for(int i = 2; i <= 1000000; i++){
        lll k = i;
        lll curr = 1 + k + k*k;
        lll T = k*k;
        s.insert(curr);
        while(curr <= 1e18){
            curr += T*k;
            T = T*k;
            if(curr <= 1e18) s.insert(curr);
        }
    }
    for(auto &ele : s){
        v.PB(ele);
    }
}
void solve(){
    ll a; cin>>a;
    lll n = (lll)a;
    //for this i think if i solve for 1 + k(k+1) = n
    // this might work , let see brother
    //k*k + k + (1-n)=  0;
    // k = (-1 +-(sqrt(1-4*(1-n))))/2
    if(a > 1e10){
        ll S = (ll)(sqrt(a));
        for (ll k = S-2; k <= S+2; k++) {
            lll val = 1 + k + (lll)k*k;
            if (val == n) {
                cout<<"YES\n";
                return;
            }
        }
    }
    //1 + k(1 + k(1+k)) = n ->
    // 1 + k(1 + k + k*k) = n;
    // 1 + k + k*k + k*k*k = n;
    //look above that is GP
    //sum of gp = 
    // i think i can do loop of range of k
    // range of  k >= cuberoot(n) && k < cuberoot(n)+1
    // if(a >= 1e12){
    //     for(lll i = 10000; i <= 1000000; i++){
    //         lll k  = i;
    //         if(1 + k + k*k + k*k*k == n){
    //             cout<<"YES\n";
    //             return;
    //         }
    //     }
    // }
    
    // ll limit = n;
    // limit = min(limit, (ll)1e7);
    // for(lll i = 2; i*i <= limit; i++){
    //     if(f(i, n)){
    //         cout<<"YES\n";
    //         return;
    //     }
    // }
    // cout<<"NO\n";
    auto ok = binary_search(v.begin(), v.end(), a);
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    f();
    int _;
    cin>>_; while(_--)
    solve();
}