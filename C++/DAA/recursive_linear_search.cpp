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

bool recursive_linear_search(vector<int> &arr, int target, int currIdx){
    if(currIdx >= arr.size()) return false;
    if(arr[currIdx] == target) return true;
    return recursive_linear_search(arr, target, currIdx+1);
}
void solve(){
    vector<int> arr = {1,2,3,4,6,8,123,5434};
    int n = arr.size();
    int target = 6;
    bool is_present = recursive_linear_search(arr , target, 0);
    if(is_present) cout<<"YES\n";
    else cout<<"NO\n";
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