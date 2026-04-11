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
    int neg = 0, pos = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x < 0) neg++;
        else pos++;
    }
    int result = -1;
    if(pos >= neg){
        if(neg % 2 == 1) result = 1;
        else result = 0;
    }
    int a = n/2;
    a = n - a;
    int ans = 0;
    ans = a - pos;
    neg = neg - ans;
    if(neg % 2 == 1){
        ans++;
    }
    if(result != -1) cout<<result<<"\n";
    else cout<<ans<<"\n";
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

