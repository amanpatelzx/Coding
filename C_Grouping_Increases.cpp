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
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    int res = 0;
    int a = INT_MAX, b = INT_MAX;
    for(int i = 0; i < n; i++){
        int val = v[i];
        if(a > b) swap(a, b);
        if(a >= val){
            a = val;
        }
        else if(b >= val) b = val;
        else {  
            res++;
            a = val;
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