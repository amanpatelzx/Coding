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

void selection_sort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int idx = i;
        for(int j = i; j < n; j++){
            if(arr[idx] > arr[j]) idx = j;
        }
        swap(arr[i], arr[idx]);
    }
}
void solve(){
    vector<int> arr = {1,3,2,6,2,5,3};
    int n = arr.size();
    selection_sort(arr);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
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