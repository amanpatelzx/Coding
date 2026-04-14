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
    ll p,q;
    cin>>p>>q;

    ll t = p + 2*q;

    if((t-1) % 3 == 0){
        ll n = (t-1)/3;
        cout<<1<<" "<<n<<"\n";
        return;
    }
    if((t+2) % 7 == 0){
        ll n = (t+2)/7;
        if(n <=1){
            cout<<-1<<"\n";
            return;
        }
        cout<<2<<" "<<n<<"\n";
        return;
    }
    cout<<-1<<"\n";


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