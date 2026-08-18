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

vector<pair<int,int>> seg;

void build(vector<int> &arr,int node,int l,int r){
    if(l==r){
        seg[node]={arr[l],l};
        return;
    }

    int mid=(l+r)/2;

    build(arr,2*node,l,mid);
    build(arr,2*node+1,mid+1,r);

    seg[node]=min(seg[2*node],seg[2*node+1]);
}

void update(int node,int l,int r,int idx){
    if(l==r){
        seg[node]={INT_MAX,l};
        return;
    }

    int mid=(l+r)/2;

    if(idx<=mid)
        update(2*node,l,mid,idx);
    else
        update(2*node+1,mid+1,r,idx);

    seg[node]=min(seg[2*node],seg[2*node+1]);
}

void segment_sort(vector<int> &arr){
    int n=arr.size();

    seg.resize(4*n);

    build(arr,1,0,n-1);

    vector<int> ans;

    for(int i=0;i<n;i++){
        int val=seg[1].first;
        int idx=seg[1].second;

        ans.push_back(val);

        update(1,0,n-1,idx);
    }

    arr=ans;
}

void solve(){
    vector<int> arr={4,2,1,6,3,6,8,213,65};

    segment_sort(arr);

    for(int x:arr)
        cout<<x<<" ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}