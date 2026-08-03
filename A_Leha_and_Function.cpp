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
    vi a(n), b(n); For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];
    map<int, vi> mp;
    for(int i = 0; i < n; i++){
        mp[b[i]].PB(i);
    }
    sort(a.rbegin(), a.rend());
    int i = 0;
    vector<int> res(n);
    for(auto &ele : mp){
        int m = ele.second.size();
        for(int j = m-1; j >= 0; j--){
            res[ele.S[j]] = a[i];
            i++;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}