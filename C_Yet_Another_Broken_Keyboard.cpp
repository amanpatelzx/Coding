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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    US<char> mp;
    for(int i = 0; i < k; i++){
        char ch; cin>>ch;
        mp.insert(ch);
    }
    int curr = 0;
    int last = 0;
    ll res = 0;
    while(curr < n){
        if(!mp.count(s[curr])){
            ll val = curr-last;
            curr++;
            last = curr;
            res += (val*(val+1)/2); 
        }
        else curr++;
    }
    ll val = curr-last;
    res += (val*(val+1)/2);
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}