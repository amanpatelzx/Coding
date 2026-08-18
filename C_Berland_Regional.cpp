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

void merge_sort(vi &v, int l, int r){
    if(l == r) return;
    int mid = l + (r-l)/2;
    merge_sort(v, l, mid);
    merge_sort(v, mid+1, r);

    int i = l, j = mid+1;
    vi res;
    while(i <= mid && j <= r){
        if(v[i] <= v[j]){
            res.PB(v[i]);
            i++;
        }
        else{
            res.PB(v[j]);
            j++;
        }
    }
    if(i <= mid){
        while(i <= mid) res.PB(v[i++]);
    }
    if(j <= r){
        while(j <= r) res.PB(v[j++]);
    }
    for(int i = 0; i < res.size(); i++){
        v[l+i] = res[i];
    }
    return;
}
void solve(){
    vi v = {3,2,4,5,1,5,7};
    int n = v.size();
    merge_sort(v, 0, n-1);
    for(int i = 0; i < n; i++) cout<<v[i]<<" ";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}