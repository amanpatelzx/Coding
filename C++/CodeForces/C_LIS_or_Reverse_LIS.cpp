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
    int n; cin>>n;
    vl v(n); For(i,0,n-1) cin>>v[i];
    sort(v.begin(), v.end());
    int res = 0;
    
    vl a,b;
    int i = 0;
    while(i < n){
        if(a.size() == 0){
            a.PB(v[i]);
            i++;
        }
        else{
            while(i < n && v[i] == a.back()) i++;
            if(i < n){
                a.PB(v[i]);
                i++;
            }
        }
        if(i < n && b.size() == 0){
            b.PB(v[i]);
            i++;
        }
        else{
            while(i < n && v[i] == b.back()) i++;
            if(i < n){
                b.PB(v[i]);
                i++;
            }
        }
    }
    int aa = a.size(), bb = b.size();
    res = max(aa, bb);
    cout<<res<<"\n";
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