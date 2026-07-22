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
    char c; cin>>c;
    string s; cin>>s;

    // if last prime no is not c, then we have to search last 
    //first prime no. that is c
    //but when in which all the condition where answer can be one
    // if(two consecutive similar char dikhe to ->)
    //eg abaa, baaa, aaba, aaab or -> ababababa
    //eg aaaabxcdfgdfg -> aaaaabc;
    string str(n,c);
    if(str == s){
        cout<<0<<"\n";
        return;
    }
    int idx = -1;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == c){
            idx = i;
            break;
        }
    }
    if(idx >= n/2) {
        cout<<1<<"\n";
        cout<<idx+1<<"\n";
    }
    else{
        cout<<2<<"\n";
        cout<<n<<" "<<n-1<<'\n';
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}