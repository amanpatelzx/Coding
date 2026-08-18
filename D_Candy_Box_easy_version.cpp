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
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    map<int,int> mp;
    for(auto &ele : v) mp[ele]++;
    vi arr;
    for(auto &ele : mp) arr.PB(ele.S);
    sort(arr.rbegin(), arr.rend());
    // for(auto &ele : arr) cout<<ele<<" ";
    // cout<<" -> ";
    ll res = 0;
    ll last = INT_MAX;
    for(int i = 0; i < arr.size(); i++){
        int curr = arr[i];
        if(curr < last){
            res += curr;
            last = curr-1;
        }
        else{
            res += last;
            last--;
        }
        if(last == 0) break;
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