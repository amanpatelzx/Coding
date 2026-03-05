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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        if((x+y)%3 == 0 && (x >= (-4*y) && x >= 2*y)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}