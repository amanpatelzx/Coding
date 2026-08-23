#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    ll n; cin>>n;
    ll a, b;
    
    ll rem = n % 12;
    //rem -> 0 - 11 - > a = (0,9) or 11, if a = 10 >22;
    if(rem == 10) a = 22;
    else a = rem;
    if(a == 22){
        if( n < 22){
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<a<<" "<<n-a<<"\n";

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