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
 
void solve(){
    int n,m; cin>>n>>m;
    vector<vi> v(n, vi(m));
    For(i,0,n-1){
        For(j,0,m-1) cin>>v[i][j];
    }
    //I can short it, 
    //sort all the ranges : 
    //1 4 , 3 6 , 1 5 , 34  31243 
    //bhai dekho, sabka max range nikal kar sort kar ke 
    //second wale pe binary search lagao
    // i think ye work karna chahiyye
    //lets fucking go....

    vector<pi> arr;
    For(j,0,m-1){
        int start = 0;
        For(i,1,n-1){
            if(v[i][j] < v[i-1][j]){
                arr.push_back({start+1, i});
                start = i;
            }
        }
        if(n > start) arr.push_back({start+1, n});
    }
    sort(arr.begin(), arr.end());
    // for(int i = 0; i < arr.size(); i++){
    //     cout<<arr[i].F<<" "<<arr[i].S<<"\n";
    // }
    vector<pi> res;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i].F == arr[i].S) continue;
        if(res.size() == 0) res.PB(arr[i]);
        else{
            auto P = res.back();
            if(arr[i].F >= P.F && arr[i].S <= P.S) continue;
            else res.PB({arr[i]});
        }
    }
    // for(int i = 0; i < res.size(); i++){
    //     swap(res[i].F, res[i].S);
    // }
    // for(int i = 0; i < res.size(); i++){
    //     cout<<res[i].F<<" "<<res[i].S<<"\n";
    // }
    vector<int> tmp;
    for(int i = 0; i < res.size(); i++){
        tmp.PB(res[i].S);
    }
    int k; cin>>k;
    while(k--){
        int l, r; cin>>l>>r;
        if(l == r){
            cout<<"Yes\n";
            continue;
        }
        auto it = lower_bound(tmp.begin(), tmp.end(), r);
        int idx = -1;
        if(it != tmp.end()) idx = it - tmp.begin();
        if(idx == -1){
            cout<<"No\n";
        }
        else{
            int val = res[idx].F;
            if(val <= l){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}