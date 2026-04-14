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
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i = 1; i*i <= min(10000LL, n); i++){
        if(n % i == 0){
            v.push_back(i);
            if(i*i != n) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    int result = 1;
    int cnt = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i]-v[i-1] == 1){
            cnt++;
            result = max(result, cnt);
        }
        else cnt = 1;
    }
    cout<<result<<"\n";

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