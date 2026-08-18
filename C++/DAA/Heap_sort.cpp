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

void heapify(vector<int>& a, int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l < n && a[l] > a[largest])
        largest=l;

    if(r < n && a[r] > a[largest])
        largest=r;

    if(largest!=i){
        swap(a[i] , a[largest]);
        heapify(a , n ,largest);
    } 
} 
void heapSort(vector<int>& a){
    int n = a.size();
    for(int i = n/2-1;i >= 0; i--){
        heapify(a ,n ,i);
    }
    for(int i = n-1 ; i > 0; i--){
        swap(a[0] , a[i]);
        heapify(a, i, 0);
    }
}
void solve(){
    vector<int> arr = {5, 2, 8, 1, 9, 3};
    int n = arr.size();
	heapSort(arr);
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