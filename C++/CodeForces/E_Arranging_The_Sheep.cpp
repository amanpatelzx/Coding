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
    string s; cin>>s;
    vl pref(n), suff(n);
    ll left = 0, right = 0;
    if(s.front() == '*') left++;
    if(s.back() == '*') right++;
    for(int i = 1; i < n; i++){
        if(s[i] == '*'){
            left++;
            pref[i] = pref[i-1];
        }
        else{
            pref[i] = pref[i-1] + left;
        }
    }
    for(int i = n-2; i >= 0; i--){
        if(s[i] == '*'){
            right++;
            suff[i] = suff[i+1];
        }
        else{
            suff[i] = suff[i+1] + right;
        }
    }
    ll res = 1e16;
    for(int i = 0; i < n; i++){
        ll SS = 0;
        if(i != n-1) SS = suff[i+1];
        res = min(res, pref[i] + SS);
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}