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
    ll n, q; cin>>n>>q;
    priority_queue<ll , vector<ll>, greater<ll>> pq;
    for(int i = 1; i <= n; i++) pq.push(i);
    priority_queue<pair<ll,vector<ll>>, vector<pair<ll,vector<ll>>>, greater<pair<ll,vector<ll>>>> timePq;
    while(q--){
        ll t, k , d; cin>>t>>k>>d;
        while(!timePq.empty() && timePq.top().first <= t){
            auto &vv = timePq.top().second;
            for(auto &ele : vv) pq.push(ele);
            timePq.pop();
        }
        if(pq.size() >= k){
            vector<ll> v;
            int tt = k;
            ll sum = 0;
            while(tt--){
                v.PB(pq.top());
                sum += pq.top();
                pq.pop();
            }
            cout<<sum<<"\n";
            timePq.push({t+d, v});
        }
        else{
            cout<<-1<<"\n";
        }
    }
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