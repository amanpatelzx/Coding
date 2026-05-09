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
    int n;
    cin>>n;

    int k;
    int i = 1;
    while( (1 << i) <= n-1){
        i++;
    }
    k = (1 << i) / 2;
    
    
    for(int i = 1; i < n; i++){
        if(i == k) cout<<0<<" ";
        cout<<i<<" ";
    }
    // if(n-1 <= 2) cout<<0<<" ";
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