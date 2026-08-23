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
    int idx = -1;
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == s[i+1] && s[i] != s[i-1] && s[i] != s[i+1]){
            idx = i;
        }
    }
    if(idx == -1){
        for(int i = 1; i < n-1; i++){
            if(s[i-1] != s[i+1] && s[i] != s[i-1] && s[i] != s[i+1]){
                idx = i;
            }
        }
    }
    if(idx == -1) idx = 1;
    string S;
    for(int i = 0; i < n; i++){
        if(i != idx) S += s[i];
    }
    S += '0';
    int cnt = 0;
    int i = 0;
    // cout<<S<<" -> ";
    while(i < n-1){
        if(S[i] != S[i+1]) cnt++;
        i++;
    }
    if(cnt == 0) cnt++;
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}