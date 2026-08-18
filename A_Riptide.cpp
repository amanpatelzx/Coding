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
    vector<int> v(3);
    for(int i = 0; i < 3; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    int res = 0;
    while(1){
        int a = v[0], b = v[1], c = v[2];
        if(a == b || a == c || b == c){
            break;
        }
        v[0]--;
        v[2]++;
        res++;
    }
    cout<<res<<"\n";
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}