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
    vl v(n); For(i,0,n) cin>>v[i];
    ll constrast = 0;
    for(int i = 0; i < n-1; i++){
        constrast += abs(v[i] - v[i+1]);
    }
    if(constrast == 0){
        cout<<1<<"\n";
        return;
    }
    vl arr;
    arr.PB(v[0]);
    for(int i = 1; i < n; i++){
        if(v[i] != v[i-1]) arr.PB(v[i]);
    }
    int cnt = 0;
    n = arr.size();
    for(int i = 1; i < n-1; i++){
        if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1])){
            cnt++;
        }
    }
    cout<<cnt+2<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}