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
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        ll x ; cin>>x;
        mp[x]++;
    }
    ll mini = INT_MAX;
    for(auto &ele : mp) mini = min(mini , ele.S);
    ll currL = n;
    ll res = 0;
    ll newMini = INT_MAX;
    
    while(1){
        if(mp.size() == 0) break;
        
        ll diff = k - currL;
        int M = (int)mp.size();
        
        if(diff > 0){
            if(diff % M == 0) res++;
        }
        else{
            diff = -diff;
            if(diff % M == 0){
                int val = diff/M;
                if(val < mini) res++;
            }
        }
        currL -= mini*M;
        set<int> s;
        for(auto &ele : mp){
            ele.S -= mini;
            if(ele.S == 0){
                s.insert(ele.F);
            }
            else{
                newMini = min(newMini , ele.S);
            }
        }
        for(auto &ele : s){
            mp.erase(ele);
        }
        mini = newMini;
        newMini = INT_MAX;
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