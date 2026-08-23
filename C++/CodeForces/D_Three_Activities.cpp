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
    int n; cin>>n;
    vi a(n), b(n), c(n);
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];
    For(i,0,n) cin>>c[i];

    vector<pi> A(n),B(n),C(n);
    For(i,0,n){
        A[i] = {a[i],i};
    }
    For(i,0,n){
        B[i] = {b[i],i};
    }
    For(i,0,n){
        C[i] = {c[i],i};
    }
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    sort(C.rbegin(),C.rend());

    //if(all at same position)
    // if(two has same , third is different)
    //i think do the brute force there
    ll res = 0;
    for(int i = 0; i < min(3,n); i++){
        ll sum = A[i].F;
        for(int j = 0; j < min(3,n); j++){
            if(B[j].S == A[i].S) continue;
            ll sum1 = sum + B[j].F;
            for(int k = 0; k < min(3,n); k++){
                if(B[j].S == C[k].S || C[k].S == A[i].S) continue;
                ll sum3 = sum1 + C[k].F;
                res = max(res, sum3);
            }
        }
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