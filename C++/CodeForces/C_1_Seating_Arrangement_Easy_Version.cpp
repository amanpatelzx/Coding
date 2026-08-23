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
    ll n, x, s; cin>>n>>x>>s;
    string str;
    cin>>str;
    ll low = 0;
    ll high = 0;
    ll ans = 0;
    For(i,0,n-1){
        char ch = str[i];
        if(ch == 'I'){
            if (low+1 <= x){
                ans++;
                high = min(x, high+1);
                low = max(low+1, (ans+s-1)/s);
            }
        }
        else if(ch == 'E'){
            if(high*s >= ans+1){
                ans++;
                low = max(low, (ans+s-1)/s);
            }
        }
        else{
            bool okE = 0;
            if(high*s >= ans+1) okE = 1;
            bool okI = 0;
            if(low+1 <= x) okI = 1;

            if(okE || okI){
                ans++;
                high = min(x, high+1);
                if(!okE) low = max(low+1, (ans+s-1)/s);
                else low = max(low, (ans)/s);
            }
        }
    }
    cout<<ans<<'\n';
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