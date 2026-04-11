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
    int no_of_odd = 0 , no_of_even = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x % 2 == 0) no_of_even++;
        else no_of_odd++;
    }
    if(no_of_odd % 2 == 0) cout<<"Yes\n";
    else cout<<"No\n";
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

