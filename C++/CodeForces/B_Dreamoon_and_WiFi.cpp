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
ll fact(ll a){
    ll res = 1;
    for(int i = 1; i <= a; i++) res *= i;
    return res;
}
void solve(){
    string a, b; cin>>a>>b;
    int n = a.size();
    int ap = 0, an = 0, bp = 0, bn = 0, bq = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '+') ap++;
        else an++;
    }
    for(int i = 0; i < n; i++){
        if(b[i] == '+') bp++;
        else if(b[i] == '-') bn++;
        else bq++;
    }
    double res = 0.0;
    if(bp > ap || bn > an){
        cout<<fixed<<setprecision(12)<<res<<"\n";
        return;
    }
    else{
        ll remP = ap - bp;
        ll remN = an - bn;
        //probality = (desired outcome)/total_outcome;
        //no of way to choose remP and remN from bq;
        //totol = 2^bq;
        ll desired = fact(bq)/(fact(remP)*fact(remN));
        ll total = (1LL << bq);
        res = (desired*1.0)/total;
        if(bq == 0) res = 1.0;
        cout<<fixed<<setprecision(12)<<res<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}