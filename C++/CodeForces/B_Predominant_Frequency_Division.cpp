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
    int n; cin>>n;
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];

    vi a(n), b(n), c(n);
    for(int i = 0; i < n; i++){
        if(i){
            a[i] = a[i-1] + (v[i] == 1);
            b[i] = b[i-1] + (v[i] == 2);
            c[i] = c[i-1] + (v[i] == 3);
        }
        else{
            a[i] = (v[i] == 1);
            b[i] = (v[i] == 2);
            c[i] = (v[i] == 3);
        }
    }
    int last = INT_MAX;
    for(int i = 0; i < n-1; i++){
        if(last != INT_MAX){
            if(a[i]+b[i]-c[i] >= last){
                cout<<"YES\n";
                return;
            }
        }
        if(a[i] >= b[i]+c[i]) last = min(last, a[i]+b[i]-c[i]);   
    }
    cout<<"NO\n";
    // int m = arr.size();
    // vi brr(m);
    // for(int i = 0; i < m; i++){
    //     int val = a[i]+b[i]-c[i];
    //     if(brr[i].PB(val));
    // }
    // vi pref[m];
    // if(m == 0){
    //     cout<<"NO\n";
    //     return;
    // }
    // pref[0] = brr[0];
    // for(int i = 1; i < m; i++){
    //     pref[i] = min(pref[i-1], brr[i]);
    // }
  




    // int o = 0, t = 0, th = 0;
    // bool f1 = 0, f2 = 0;
    // int idx = -1;
    // for(int i = 0; i < n; i++){
    //     if(v[i] == 1) o++;
    //     else if(v[i] == 2) t++;
    //     else th++;
    //     if(!f1){
    //         if(o >= (t+th)){
    //             f1 = 1;
    //             o = 0;
    //             t = 0;
    //             th = 0;
    //             idx = i;
    //         }
    //     }
    //     else if(!f2){
    //         if(o+t >= th){
    //             if(i < n-1){
    //                 cout<<"YES\n";
    //                 return;
    //             }
    //         }
        
    //     }
    // }
    
    // cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}