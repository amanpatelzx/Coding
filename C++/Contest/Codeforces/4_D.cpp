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

   a = a % n;
   b = b % m;
    int countA = 0;
    int temp = 0;
    unordered_set<int> s;
   for(int i = 0; i < a; i++){
       temp = (n-temp) % a;
       if(s.count(temp)) break;
       s.insert(temp);
       countA++;
   }
    int countB = 0;
    temp = 0;
    unordered_set<int> s1;
   for(int i = 0; i < b; i++){
       temp = (n-temp) % b;
       if(s1.count(temp)) break;
       s1.insert(temp);
       countB++;
   }
   if(countA == a && countB == b) cout<<"YES\n";
   else cout<<"NO\n";
   

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