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
ll pascal[1006][1006];
ll M = 1000000000;
void factorial(){
    memset(pascal,0,sizeof(pascal));
    pascal[0][0] = 1;
    pascal[1][0] = 1;
    pascal[1][1] = 1;
    for(int i = 2; i <= 1001; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i-1) pascal[i][j] = 1;
            else{
                pascal[i][j] = (pascal[i-1][j-1]+pascal[i-1][j]) % M;
            }
        }
    }
    return;
}
void solve(){
    int n; cin>>n;
    for(int i = 0; i <= n; i++){
        cout<<pascal[n+1][i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    factorial();
    int _;
    cin>>_; while(_--)
    solve();
}