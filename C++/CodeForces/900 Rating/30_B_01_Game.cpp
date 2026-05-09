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
    string s;
    cin>>s;

    int count  = 0;

    int n = s.size();
    int one = 0;
    int zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') one++;
        else zero++;
    }
    int ans = min(one , zero);

    if(ans % 2 == 1) cout<<"DA\n";
    else cout<<"NET\n";
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