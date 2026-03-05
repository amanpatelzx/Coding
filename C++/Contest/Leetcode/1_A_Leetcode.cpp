#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string f(ll n){
    if(n == 0) return "0";
    string ans = "";
    while(n > 0){
        int rem = n %2;
        n /= 2;
        ans = (char)(rem + '0') + ans;
    }
    return ans;
}
int main() {
    ll n = 2734620983070918;
     cout<<f(n);
}