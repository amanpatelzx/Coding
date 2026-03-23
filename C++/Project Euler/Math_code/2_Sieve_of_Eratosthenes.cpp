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
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int gcd (int a, int b) {
    if (b == 0) return a;
    else return gcd (b, a % b);
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
int seive_prime(int n){
    vector<bool> is_Prime(n+1, true);
    is_Prime[0] = is_Prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_Prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_Prime[j] = false;
        }
    }
    int result = 0;
    for(int i = 0; i < n+1; i++){
        if(is_Prime[i]) result++;
    }
    return result;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       cout<<seive_prime(n)<<" ";
    }

}