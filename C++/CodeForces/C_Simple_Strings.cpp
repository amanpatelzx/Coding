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
    string s;
    cin>>s;
    string res;
    int n = s.size();
    string S = "abc";
    res += s[0];
    for(int i = 1; i < n; i++){
        if(s[i] == res.back()){
            char right = 'z';
            if(i < n-1) right = s[i+1];
            if(S[0] != right && S[0] != res.back()) res += S[0];
            else if(S[1] != right && S[1] != res.back()) res += S[1];
            else if(S[2] != right && S[2] != res.back()) res += S[2];
        }
        else{
            res += s[i];
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