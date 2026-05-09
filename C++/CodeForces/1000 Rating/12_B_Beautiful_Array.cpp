#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    ll a = k*b;
    ll c = a + (n)*(k-1);
    vector<ll>ans;
    ll diff = s-a;
    
    if(s < a || s > c){
        cout<<-1<<"\n";
        return;
    }
   
    else{
        ll jj = min(diff, k-1);
        a += jj;
        diff -= jj;
        while(diff > 0){
            ll f = k-1;
            if(k-1 > diff) f = diff;
            ans.push_back(f);
            if(k-1 > diff) diff = 0;
            else diff -= (k-1);
        }
    }
    ans.push_back(a);
    int m = ans.size();
    int tt = n-m;
    for(int i = 0; i < tt; i++) ans.push_back(0);

    sort(ans.begin(),ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}