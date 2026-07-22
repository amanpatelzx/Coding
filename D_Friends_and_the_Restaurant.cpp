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
    vl x(n), y(n);
    For(i,0,n) cin>>x[i]; 
    For(i,0,n) cin>>y[i];

    vl diff(n);
    for(int i = 0; i < n; i++){
        diff[i] = y[i] - x[i];
    }
    sort(diff.begin(), diff.end());

    ll res = 0;
    int i = 0, j = n-1;
    while(i < j){
        if(diff[i] + diff[j] >= 0){
            res++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}