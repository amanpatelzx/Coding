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
    vi o1, e1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s1[i] == '1') e1.PB(i);
        if(i % 2 == 1 && s1[i] == '1') o1.PB(i);
    }
    vi o2, e2;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && s2[i] == '1') e2.PB(i);
        if(i % 2 == 1 && s2[i] == '1') o2.PB(i);
    }
    if((int)o1.size() == (int)o2.size() && (int)e1.size() == (int)e2.size()){
        ll res = 0;
        for(int i = 0; i < e2.size(); i++){
            res += (ll)(abs(e1[i] - e2[i]))/2;
        }
        for(int i = 0; i < o2.size(); i++){
            res += (ll)(abs(o1[i] - o2[i]))/2;
        }
        cout<<res<<"\n";
        return;
    }
    cout<<-1<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}