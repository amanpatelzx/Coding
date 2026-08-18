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
    map<ll, vector<ll>> mp;
    for(ll i = 0; i < n; i++){
        mp[v[i]].PB(i);
    }
    if((*mp.begin()).F != 0){
        cout<<-1<<"\n";
        return;
    }
    if(mp.size() == 1){
        if(v.front() > 0){
            cout<<-1<<"\n";
            return;
        }
    }
    map<ll,ll> ans;
    ll lastSum = 0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ll curr = (*it).F;
        ll f = (*it).S.size();

        auto tt = it;
        tt++;
        if(tt != mp.end()){
            ll val = (*tt).F;
            val -= curr;
            if(val % f != 0){
                cout<<-1<<"\n";
                return;
            }
            ans[curr] = val/f;
        }
    }
    vl TT;
    for(auto &ele : mp){
        TT.PB(ans[ele.F]);
    }
    for(ll i = 0; i < (int)(TT.size())-2; i++){
        if(TT[i] >= TT[i+1]){
            cout<<-1<<"\n";
            return;
        }
    }
    vl res(n, 0);
    for(auto &ele : mp){
        ll curr = ele.F;
        for(auto & ii : ele.S){
            res[ii] = ans[curr];
        }
    }
    ll maxi = 0;
    for(ll i = 0; i < n; i++) maxi = max(maxi, res[i]);
    maxi++;
    for(ll i = 0; i < n; i++){
        if(res[i] == 0) res[i] = maxi;
    }
    for(ll i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}