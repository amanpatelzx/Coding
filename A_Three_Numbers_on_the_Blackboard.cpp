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
    vl v(3);
    for(int i = 0; i < 3; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v.back() > v[0] + v[1]){
        cout<<v[1]<<"\n";
        return;
    }
    else{
        cout<<v[2] - v[0]<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}