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
    int n, w; cin>>n>>w;
    vi v(n); For(i,0,n-1) cin>>v[i];

    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++){
        arr.push_back({v[i], i});
    }
    sort(arr.begin(), arr.end());

    vector<pair<int,int>> res;
    for(int i = 0; i < n; i++){
       int val = arr[i].first;
       int capa = (val + 1) / 2;
       res.push_back({capa, arr[i].second});
       w -= capa; 
    }

    if(w < 0){
        cout<<-1<<"\n";
        return;
    }

    for(int i = n-1; i >= 0; i--){
        int capa = arr[i].first - res[i].first;
        if(w >= capa){
            res[i].first += capa;
            w -= capa;
        }
        else{
            res[i].first += w;
            break;
        }
        if(w == 0) break;
    }
    sort(res.begin(), res.end(), [&](auto &a, auto &b){
        return a.second < b.second;
    });
    for(int i = 0; i < n; i++){
        cout<<res[i].first<<" ";
    }
    cout<<"\n";
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}