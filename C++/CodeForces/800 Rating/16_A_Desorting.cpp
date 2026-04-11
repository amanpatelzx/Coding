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
    // vector<int> v(n);
    bool mark = false;
    int prev = 0;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x < prev) mark = true;
        if(i >= 1){
            mini = min(mini , x-prev);
        }
        prev = x;
    }
    if(mark) cout<<0<<"\n";
    else{
        int a = 0, m = mini;
        int count = mini/2+1;
        cout<<count<<"\n";
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

