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
    vector<vector<ll>> v(n);
    for(int i = 0; i < n; i++){
        ll x; cin>>x;
        vector<ll> arr(x);
        ll maxi = 0;
        for(ll j = 0; j < x; j++){
            cin>>arr[j];
            maxi = max(maxi, arr[j] - j + 1);
        }
        arr.insert(arr.begin(),maxi);
        v[i] = arr;
    }
    sort(v.begin(),v.end());

    ll low = 0, high = 1e15;
    ll res = 2;
    auto check = [&](ll mid){
        for(int i = 0; i < n; i++){
            for(int j = 1; j < v[i].size(); j++){
                if(mid > v[i][j]){
                    mid++;
                }
                else return false;
            }
        }
        return true;
    };
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(mid)){
            res = mid;
            high = mid - 1;
        }else low = mid + 1;
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