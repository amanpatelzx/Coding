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
    ll n ,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++) cin>>v[i];
    // note -> 7 + 7 = 14 => ceil(14/3) = 5;
    // but -> 3 + 3 = 6;
    //  -> 5 + 5 = 10 => 4, 
    ll sum = 0 ;
    ll mini = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        mini += ceil(v[i]*1.0/x);
    }
    sum = ceil(sum*1.0/x);

    cout<<sum<<" "<<mini<<"\n";
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