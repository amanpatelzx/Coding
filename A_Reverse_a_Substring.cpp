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
    string t = s;
    sort(t.begin(),t.end());
    if(t == s){
        cout<<"NO\n";
        return;
    }
    else{
        for(int i = 1; i < n; i++){
            if(s[i] < s[i-1]){
                cout<<"YES\n";
                cout<<i<<' '<<i+1<<"\n";
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
}