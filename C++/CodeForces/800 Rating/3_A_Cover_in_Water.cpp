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
    vector<char> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int result = 0;
    bool check = false;
    int count = 0;
    int dot = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == '.') dot++;
        if(count >= 2) check = true;
        if(i > 0 && v[i] == '.' && v[i] == v[i-1]) count++;
        else count = 0;
    }
    if(count >= 2) check = true;
    if(check) cout<<2<<"\n";
    else{
        cout<<dot<<"\n";
    }
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