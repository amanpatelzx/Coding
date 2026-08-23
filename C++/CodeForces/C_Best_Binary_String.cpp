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
    int n;
    string s; cin>>s;
    n = s.size();
    
    for(int i = n-1; i >= 0; i--){
        if(s[i] == '?'){
            if(i == n-1) s[i] = '1';
            else{
                if(s[i+1] == '1')  s[i] = '1';
                else s[i] = '0';
            }
        }
    }
    cout<<s<<"\n";
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