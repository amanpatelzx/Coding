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
    ll n,d;
    cin>>n>>d;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int res = 0;

    int i = 0, j = n-1;
    while(i <= j){
        int a = d / v[j] + 1;
        i += a-1;
        if(i <= j) res++;
        j--;
    }
    cout<<res<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
}