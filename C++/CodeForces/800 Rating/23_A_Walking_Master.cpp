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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b > d || (d < (c-a)+b)) cout<<-1<<"\n";
    else{
        int y = abs(d-b);
        int x = (c-a);
        cout<<abs(y+y-x)<<"\n";
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

