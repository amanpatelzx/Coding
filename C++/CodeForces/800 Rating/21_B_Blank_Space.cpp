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
    int ans = 0;
    int count = 0;
    for(int i  =0; i < n; i++){
        int x;
        cin>>x;
        if(x == 0){
            count++;
            ans = max(ans, count);
        }
        else{
            count = 0;
        }
    }
    cout<<ans<<"\n";
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

