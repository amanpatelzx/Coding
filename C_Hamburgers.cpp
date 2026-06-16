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
// #define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    string s; cin>>s;
    ll nb,ns,nc; cin>>nb>>ns>>nc;
    ll pb,ps,pc; cin>>pb>>ps>>pc;
    ll r; cin>>r;

    ll B = 0, S = 0, C = 0;
    for(char ch : s){
        if(ch == 'B') B++;
        else if(ch == 'S') S++;
        else C++;
    }
    auto check = [&](ll mid){
        ll cost = 0;
        cost += max(0LL, mid*B - nb) * pb;
        cost += max(0LL, mid*S - ns) * ps;
        cost += max(0LL, mid*C - nc) * pc;
        return cost <= r;
    };

    ll low = 0, high = 1e13;
    ll res = 0;
    while(low <= high){
        ll mid = low + (high-low)/2;
        if(check(mid)){
            res = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<res<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}