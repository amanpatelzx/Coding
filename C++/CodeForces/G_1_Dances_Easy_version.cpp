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
    vl a(n), b(n);
    a[0] = 1;
    for(int i = 1; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    int i = 0, j = 0;
    while(i < n && j < n){
        if(a[i] < b[j]){
            cnt++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<n - cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}