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
    ll a, b;
    cin>>a >>b;
    ll xK,yK;
    cin>>xK>>yK;
    ll xQ,yQ;
    cin>>xQ>>yQ;
    set<pair<int,int>> vK;
    set<pair<int,int>> vQ;

    ll arr[8][2] = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    for(int i = 0; i < 8; i++){
        vK.insert({xK + arr[i][0] , yK + arr[i][1]});
        vQ.insert({xQ + arr[i][0] , yQ + arr[i][1]});
    }
    int result = 0;
    for(auto &ele : vQ){
        if(vK.find(ele) != vK.end()) result++;
    }   
    cout<<result<<"\n";
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

