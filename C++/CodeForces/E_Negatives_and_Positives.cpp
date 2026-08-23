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
    vi v(n); For(i,0,n) cin>>v[i];
    int neg = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < 0) neg++;
    }
    if(neg % 2 == 0){
        ll sum = 0;
        For(i,0,n) sum += abs(v[i]);
        cout<<sum<<"\n";
        return;
    }
    else{
        int idx = 0;
        for(int i = 1; i < n; i++){
            if(abs(v[i]) < abs(v[idx])) idx = i;
        }
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(i == idx) sum -= abs(v[i]);
            else{
                sum += abs(v[i]);
            }
        }
        cout<<sum<<'\n';
        return;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}