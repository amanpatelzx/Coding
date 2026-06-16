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
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    ll n,k; cin>>n>>k;
    vl v(n);
    for(int i= 0; i < n; i++) cin>>v[i];

    int tail = 0, head = -1;
    ll res = 0;
    ll currSum = 0;
    while(tail < n){
        while(head+1 < n && ( v[head+1] + currSum <= k)){
            head++;
            currSum += v[head];
        }
        res += head-tail+1;
        if(tail > head){
            tail++;
            head = tail-1;
        }
        else{
            currSum -= v[tail];
            tail++;
        }
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}