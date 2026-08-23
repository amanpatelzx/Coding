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
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vl a = v;
    sort(a.begin(), a.end());
    if(v == a){
        cout<<0<<'\n';
        return;
    }
    if(v[n-2] > v[n-1] || v[n-1] < 0){
        cout<<-1<<"\n";
        return;
    }
    else{
        int idx = n-2;
        cout<<idx<<"\n";
        for(int i = 0; i < idx; i++){
            cout<<i+1<<" "<<idx+1<<" "<<n<<"\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}