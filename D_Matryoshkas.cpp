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
    vl v(n); For(i,0,n) cin>>v[i];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    vector<pi> arr;
    for(auto &ele:mp){
        arr.PB(ele);
    }
    sort(arr.begin(), arr.end());
    ll res = 0;
    int m = arr.size();
    int last = arr[0].S;
    for(int i = 1;  i < m; i++){
        if(arr[i].F != arr[i-1].F+1){
            res += last;
            last = arr[i].S;
        }
        else{
            if(arr[i].S >= last){
                last = arr[i].S;
            }
            else{
                res += last - arr[i].S;
                last = arr[i].S;
            }
        }
    }
    res += last;
    cout<<res<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}