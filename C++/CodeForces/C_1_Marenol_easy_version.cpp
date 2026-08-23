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
    string s1, s2; cin>>s1>>s2;
    int o1 = 0, e1=  0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s1[i] == '1') e1++;
        if(i % 2 == 1 && s1[i] == '1') o1++;
    }
    int o2 = 0, e2=  0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s2[i] == '1') e2++;
        if(i % 2 == 1 && s2[i] == '1') o2++;
    }
    if(o1 == o2 && e1 == e2){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}