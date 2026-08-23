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
    int one = 0, zero = 0;
    for(auto &ch : s){
        if(ch == '1') one++;
        else zero++;
    }
    if(abs(one - zero) > 2){
        cout<<-1<<"\n";
        return;
    }
    int oneP = 0, zeroP = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            if(s[i] == '1') oneP++;
            else zeroP++;
        }
    }
    if(oneP == zeroP){
        cout<<oneP + zeroP<<"\n";
        return;
    }
    else if(oneP > zeroP){
        int res = oneP + oneP-1;
        cout<<res<<'\n';
        return;
    }
    else{
        int res = zeroP + zeroP-1;
        cout<<res<<'\n';
        return;
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}