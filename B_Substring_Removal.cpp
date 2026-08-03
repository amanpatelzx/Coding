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
ll M = 998244353;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n == 2){
        cout<<3<<"\n";
        return;
    }

    ll left = 0, right = 0;
    int i = 0, j = n-1;
    while(s[i++] == s.front()) left++;
    while(s[j--] == s.back()) right++;
    ll res = left+1 + right;
    if(s.front() == s.back()) res = (left+1)*(right+1) % M;
    res = res%M;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}