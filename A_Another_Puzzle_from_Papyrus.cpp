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
    int n,c; cin>>n>>c;
    vi a(n), b(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    vi aa = a;
    vi bb = b;
    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());
    int res = 0;
    bool ok = 1;
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            ok = 0;
        }
    }
    if(!ok){
        res += c;
        for(int i = 0; i < n; i++){
            int val = aa[i]-bb[i];
            if(val < 0){
                cout<<-1<<'\n';
                return;
            }
            res += val;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            res += a[i]-b[i];
        }
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