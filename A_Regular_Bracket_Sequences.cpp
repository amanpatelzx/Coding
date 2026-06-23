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
    int n; cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        s += '(';
    }
    for(int i = 0; i < n; i++){
        s += ')';
    }
    cout<<s<<"\n";
    for(int i = 1; i < n; i++){
        swap(s[i], s[2*n-i-1]);
        cout<<s<<"\n";
        swap(s[i], s[2*n-i-1]);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}