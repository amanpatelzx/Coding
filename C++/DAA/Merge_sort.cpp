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

void merge_sort(vector<int> &arr, int leftIdx, int rightIdx){
    if(leftIdx >= rightIdx) return;
    int mid = leftIdx + (rightIdx - leftIdx) / 2;
    int n1 = mid - leftIdx + 1;
    int n2 = rightIdx - mid;
    vector<int> A(n1+1 , INT_MAX);
    vector<int> B(n2+1 , INT_MAX);

    merge_sort(arr, leftIdx, mid);
    merge_sort(arr, mid+1, rightIdx);

    for(int i = 0; i < n1; i++) A[i] = arr[leftIdx+i];
    for(int i = 0; i < n2; i++) B[i] = arr[mid+1+i];
    
    int i = 0, j = 0;
    for(int k = leftIdx; k <= rightIdx; k++){
        if(A[i] < B[j]){
            arr[k] = A[i];
            i++;
        }
        else{
            arr[k] = B[j];
            j++;
        }
    }
}
void solve(){
    vector<int> arr = {4,2,1,6,3,6,8,213,65};
    int n = arr.size();
    merge_sort(arr, 0,  n-1);
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