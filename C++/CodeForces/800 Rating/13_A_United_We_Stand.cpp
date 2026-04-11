#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> b, c;
    sort(v.begin(), v.end());
    if(v[0] == v[n-1]) {
        cout<<"-1"<<"\n";
        return;
    }
    int idx = -1;
    for(int i = n-1; i >= 1; i--){
        if(v[i] == v[i-1]){
            c.push_back(v[i]);
        }
        else{
            c.push_back(v[i]);
            idx = i;
            break;
        }
    }
    for(int i = 0; i < idx; i++){
        b.push_back(v[i]);
    }

    cout<<b.size()<<" "<<c.size()<<"\n";
    for(int i = 0; i < b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i < c.size(); i++){
        cout<<c[i]<<" ";
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

