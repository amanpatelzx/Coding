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
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(k);
    pair<ll,ll> A,B;
    bool okA = 0, okB = 0;
    for(int i = 0; i < k ; i++){
        cin>>v[i].first;
        cin>>v[i].second;
        if(i+1 == a){
            A = {v[i].first,v[i].second};
            okA = 1;
        }
        if(i+1 == b){
            B = {v[i].first,v[i].second};
            okB = 1;
        }
    }
    for(int i = k; i < n ; i++){
        ll x,y;
        cin>>x>>y;
        if(i+1 == a){
            A = {x,y};
        }
        if(i+1 == b){
            B = {x,y};
        }
    }
    ll disA = LLONG_MAX, disB = LLONG_MAX;
    ll directDis = abs(A.first-B.first) + abs(A.second-B.second);
    if(k == 0){
        cout<<directDis<<"\n";
        return;
    }
    for(auto &ele : v){
        disA = min(disA , abs(A.first-ele.first) + abs(A.second-ele.second));
        disB= min(disB , abs(B.first-ele.first) + abs(B.second-ele.second));
    }
//    if(okA) disA = 0;
//     if(okB) disB = 0; 
    cout<<min(directDis , disA+disB)<<'\n';

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