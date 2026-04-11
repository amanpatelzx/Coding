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
   int n, m , a, b;
   cin>>n>>m>>a>>b;

   if((a % n == 0 && n != 1) || (b % m == 0 && m != 1) || (n % a == 0 && a != 1) || (m % b == 0 && b != 1)) cout<<"NO\n";
   else if((a % 2== 0 && n % 2 == 0) ||( b % 2 == 0 && m % 2 == 0)) cout<<"NO\n";

   else cout<<"YES\n";

   

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