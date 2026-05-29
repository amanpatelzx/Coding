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
    int n,k; cin>>n>>k;
    string res;
    string temp;
    for(int i = 0; i < k; i++){
        temp += (char)(i + 'a');
    }
    string str = temp;
    reverse(str.begin(),str.end());
    For(i,0, n-1){
        if(i % 2 == 0) res += temp;
        else res += str;
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