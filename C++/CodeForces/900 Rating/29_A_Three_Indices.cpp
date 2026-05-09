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
    vector<int> v(n+1);
    for(int i =1; i <= n; i++) cin>>v[i];


    for(int i = 2; i <= n-1; i++){
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            cout<<"YES\n";
            cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
            return;
        }
    }
    cout<<"NO\n";
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