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
    string s; cin>>s;
    ll n = s.size();
    
    int one = 0;
    for(int i = 0; i <n ;i ++){
        if(s[i] == '1') one++;
    }
    if(one == n){
        cout<<n*n<<"\n";
        return;
    }
    s = s+s;
    n *= 2;
    int mx = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
            mx = max(cnt, mx);
        }
        else{
            cnt = 0;
        }
    }
    ll total = mx + 1;
    ll x = total / 2;
    ll y = total - x;
    cout<<x*y<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}