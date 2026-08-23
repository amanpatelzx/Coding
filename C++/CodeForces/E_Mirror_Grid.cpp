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
    vector<string> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    int res = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = i; j < n-1-i; j++){
            int one = 0, zero = 0;
            if(v[i][j] == '1') one++;
            else zero++;
            if(v[j][n-1-i] == '1') one++;
            else zero++;
            if(v[n-1-j][i] == '1') one++;
            else zero++;
            if(v[n-1-i][n-1-j] == '1') one++;
            else zero++;

            res += min(one, zero);
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