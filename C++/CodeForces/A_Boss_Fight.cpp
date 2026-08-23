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
    vi v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    map<int,int> mp;
    int res = 0;
    for(auto &ele : v) mp[ele]++;
    
    int maxiF = 0;
    for(auto &ele : mp) maxiF = max(maxiF, ele.S);

    if(maxiF <= n/2+1){
        for(auto &ele : v) res += ele;
    }
    else{
        for(auto &ele : mp){
            if(ele.S != maxiF) res += ele.F*ele.S;
            else{
                res += ele.F*(n-ele.S+2);
            }
        }
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}