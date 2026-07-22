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
    ll n; cin>>n;
    vl v(n); For(i,0,n) cin>>v[i];
    vector<pl> arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = {v[i], i+1};
    }
    sort(arr.begin(), arr.end());

    if(arr.front().F == arr.back().F){
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        int j = n-1;
        while(arr[j].F != arr[0].F){
            cout<<arr[0].S<<" "<<arr[j].S<<"\n";
            j--;
        }
        while(j > 0){
            cout<<arr[j].S<<" "<<arr.back().S<<"\n";
            j--;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}