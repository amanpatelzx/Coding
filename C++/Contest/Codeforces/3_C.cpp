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
#define For(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int n;cin>>n;
    vi v(n);
    For(i,0,n-1) cin>>v[i];
    UM<int,int>mp,mp1;
    For(i,0,n-1){
        int a = v[i];
        int cnt = 0;
        while(a!=1){
            mp1[a]++;
            mp[a] += cnt;
            cnt++;
            if(a%2 != 0){
                a++;
            }
            else a /= 2;
        }
        mp[1] += cnt;
        mp1[1]++;
        if(v[i] == 1){
            mp[2] += 1;
            mp1[2]++;
        }
    }
    int res = INT_MAX;
    for(auto &ele : mp1){
        if(ele.S == n) res = min(res, mp[ele.F]);
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}