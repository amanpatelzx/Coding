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
    int n;  cin>>n;
    vi v(n);
    For(i, 0, n-1) cin>>v[i];

    vector<int> arr(n+1);
    For(i,0,n-1){
        arr[v[i]]++;
    }
    int res = INT_MAX;
    int cnt = 0;
    if(arr[0] == 0){
        res = 0;
        cout<<0<<'\n';
        return;
    }
    else{
        For(i,0,n){
            if(arr[i] == 1) cnt++;
            if((arr[i] == 1 && cnt == 2) || arr[i] == 0 ){
                
                cout<<i<<"\n";
                return;
            }
        }
    }
    cout<<n<<'\n';

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