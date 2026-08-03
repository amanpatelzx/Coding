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
 
void solve(){
    int n, m; cin>>n>>m;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vector<pl> arr(n);
    for(int i = 0; i < n; i++){
        int val = v[i];
        int tt = 0;
        while(val % 10 == 0){
            tt++;
            val /= 10;
        }
        arr[i].F = tt;
        arr[i].S = val;
    }
    sort(arr.rbegin(), arr.rend());
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int val = arr[i].S;
        int tt = 0;
        while(val){
            tt++;
            val /= 10;
        }
        if(i % 2 == 0){
            cnt += tt;
        }
        else{
            cnt += tt + arr[i].F;
        }
    }
    if(cnt > m){
        cout<<"Sasha\n";
    }
    else cout<<"Anna\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}