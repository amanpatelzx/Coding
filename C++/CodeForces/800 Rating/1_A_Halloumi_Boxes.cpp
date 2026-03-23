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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    if(k > 1) cout<<"YES\n";
    else {
        bool is_sorted = true;
        for(int i = 1; i < n; i++){
            if(v[i] < v[i-1]) is_sorted = false;
        }
        if(is_sorted) cout<<"YES\n";
        else cout<<"NO\n";
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