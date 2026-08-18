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

bool recursive_binary_search(vector<int> &arr, int target, int low, int high){
    if(low > high) return false;
    int mid = low + (high - low ) / 2;
    if(arr[mid] == target) return true;
    bool ok = false;
    if(arr[mid] > target){
        return recursive_binary_search(arr, target, low, mid-1);
    }
    else{
        return recursive_binary_search(arr, target, mid+1, high);
    }
}
void solve(){
    vector<int> arr = {1,2,3,4,6,8,123,5434};
    int n = arr.size();
    int target = 5;
    bool is_present = recursive_binary_search(arr , target, 0, n-1);
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