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
    for(int i = 1; i <= n; i++) cin>>v[i];
    unordered_map<int,int> mp;
    for(int i = 1; i <= n;  i++){
        mp[v[i]]++;
    }
    for(int i = 1; i <= n; i++){
        if(v[i] > i || (v[i] == i && mp[v[i]] == 1)){
            cout<<-1<<"\n";
            return;
        }

    }
    if(n % 2 == 1){
        cout<<n<<" ";
        for(int i = 1; i <= n-1; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout<<i-1<<" ";
        }
        else cout<<i+1<<" ";
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