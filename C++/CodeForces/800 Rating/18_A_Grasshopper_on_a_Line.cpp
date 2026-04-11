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
    int x,k;
    cin>>x>>k;
    if(x % k != 0){
        cout<<1<<"\n";
        cout<<x<<"\n";
    }
    else{
        cout<<2<<"\n";
        cout<<x-1<<" "<<1<<"\n";
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

