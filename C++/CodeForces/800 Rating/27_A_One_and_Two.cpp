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
    ll n;
    cin>>n;
    vector<ll>v(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v[i] = x;
        if(x%2 == 0) count++;
    }
    if(count % 2 == 1){
        cout<<-1<<"\n";
        return;
    }
    int temp = 0;
    for(int i = 0; i < n; i++){
       if(v[i] % 2 == 0){
           temp++;
           if(temp == count/2){
            cout<<i+1<<"\n";
            return;
           }
       }
    }
    cout<<1<<"\n";
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

