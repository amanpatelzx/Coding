#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pivotIdx;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)

int find_pivot_Idx(vector<int>&arr, int leftIdx, int rightIdx){
    int idx = 0;
    int a = leftIdx, b = rightIdx;
    for(int i = leftIdx + 1;i <= rightIdx; i++){
        if(arr[leftIdx] > arr[i]) idx++;
    }
    swap(arr[leftIdx], arr[leftIdx+idx]);
    int pivotIdx = leftIdx + idx;
    while(a < pivotIdx && b > pivotIdx){
        if(arr[a] > arr[pivotIdx] && arr[b] < arr[pivotIdx]){
            swap(arr[a] ,arr[b]);
            a++;
            b--;
        }
        else if(arr[a] <= arr[pivotIdx]) a++;
        else b--;
    }
    return pivotIdx;
}
void quicksort(vector<int>&arr, int leftIdx ,int rightIdx){
    if(leftIdx >= rightIdx) return;
    int pivot_idx = find_pivot_Idx(arr, leftIdx, rightIdx);
    quicksort(arr, leftIdx, pivot_idx-1);
    quicksort(arr, pivot_idx+1 ,rightIdx);
}
void solve(){
    vector<int> arr = {5,3,4,2,6,1};
    int leftIdx = 0, rightIdx = arr.size()-1;
    quicksort(arr,leftIdx,rightIdx);
    for(int i = 0;i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
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