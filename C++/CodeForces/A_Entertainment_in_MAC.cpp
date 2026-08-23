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
    int n; cin>>n;
    string s; cin>>s;
    int N = s.size();
    bool ok = 0;
    int i = 0, j = N-1;
    while(i <= j){
        if(s[i] == s[j]){
            i++; j--;
        }
        else{
            if(s[i] > s[j]){
                ok = 1;
                break;
            }
            else break;
        }
    }
    string res = s;
    if(ok){
        reverse(res.begin(),res.end());
        res += s;
    }
    cout<<res<<"\n";
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