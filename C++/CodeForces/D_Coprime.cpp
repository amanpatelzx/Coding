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
    vi v(n); For(i,0,n) cin>>v[i];
    v.PB(INT_MAX);
    vector<pi> arr;
    unordered_set<int> s;
    for(int i = n-1; i >= 0; i--){
        if(!s.count(v[i])){
            s.insert(v[i]);
            arr.PB({v[i],i+1});
        }
    }
    auto isCoprime = [&](int a, int b){
        int val = min(a,b);
        if((a+b-val) % val == 0) return 0;
        for(int i = 2; i*i <= min(a,b); i++){
            if(val % i == 0){
                if((a+b-val) % i == 0 || (a+b-val) % (val/i) == 0) return 0;
            }
        }
        return 1;
    };
    int res = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i].F == 1) res = max(res, 2*arr[i].S);
        for(int j = i+1; j < arr.size(); j++){
            if(isCoprime(arr[i].F, arr[j].F)){
                res = max(res, arr[i].S + arr[j].S);
                break;
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