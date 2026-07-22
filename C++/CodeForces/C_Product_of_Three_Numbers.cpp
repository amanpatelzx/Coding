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
#define For(i,a,b) for (int i = a; i < b; i++)
 
void solve(){
    ll n; cin>>n;
    ll N = n;
    vl v;
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            n /= i;
            v.PB(i);
        }
    }
    if(n > 1) v.PB(n);
    sort(v.begin(), v.end());
    ll a = 1, b = 1, c = 1;
    for(int i = 0; i < v.size(); i++){
        if(a == 1){
            a = v[i];
        }
        else if(b == 1 || b == a){
            b *= v[i];
        }
        else break;
    }
    c = (N/(a*b));
    if(a != b && a != c && b != c && a!= 1 && b != 1 && c >= 2 && a*b*c == N){
        cout<<"YES\n";
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    else cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}