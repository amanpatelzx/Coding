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
    int n, k; cin>>n>>k;
    vector<vi> v(n,vi(n));
    For(i,0,n){
        For(j,0,n) cin>>v[i][j];
    }
    vector<vi> arr = v;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            swap(v[i][j], v[n-1-i][j]);
        }
    }
  
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            swap(v[j][i], v[j][n-1-i]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(k > 0){
                if(arr[i][j] != v[i][j]){
                    arr[i][j] = v[i][j];
                    v[n-1-i][n-1-j] = arr[i][j];
                    k--;
                }
            }
           
        }
    }
    if(arr == v){
        if(n % 2 == 1 || k % 2 == 0){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
        return;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}