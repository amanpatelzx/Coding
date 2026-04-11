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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    if(v[0] == v[n-1]){
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
    cout<<v[n-1]<<" ";
    for(int i = 0; i < n-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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

