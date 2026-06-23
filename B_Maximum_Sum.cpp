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
    ll n, k; cin>>n>>k;
    int K = k;
    vi v(n); For(i,0,n) cin>>v[i];
    sort(v.begin(), v.end());

    vl pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + v[i];
    }
    ll res = 0;
    for(int f = 0; f <= k; f++){
        int leftIdx = f*2;
        int rightIdx = n-1-(k-f);
        ll left = 0;
        if(leftIdx > 0) left = pref[leftIdx-1];
        ll diff = pref[rightIdx] - left;
        res = max(res, diff);
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