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
    int n = s.size();
    vl pref(n) , suff(n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != 'o'){
            cnt++;
            if(i) pref[i] = pref[i-1];
        }
        else{
            if(i == 0) continue;
            if(cnt == 0) pref[i] = pref[i-1];
            else pref[i] = pref[i-1] + cnt-1;
            cnt = 0;
        }
    }
    cnt = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] != 'o'){
            cnt++;
            if(i != n-1) suff[i] = suff[i+1];
        }
        else{
            if(i == n-1) continue;
            if(cnt == 0) suff[i] = suff[i+1];
            else suff[i] = suff[i+1] + cnt-1;
            cnt = 0;
        }
    }
    ll res = 0;
    for(int i = 1; i < n-1; i++){
        if(s[i] == 'o'){
            res += pref[i]*suff[i];
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}