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
bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i = 0; i  < n; i++) cin>>v[i];

    int l = 1;
    int maxi = 0;
    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]){
            l++;
            maxi = max(maxi , l);
        }
        else l = 1;
    }
    if(maxi >= m) cout<<"No\n";
    else cout<<"Yes\n";
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