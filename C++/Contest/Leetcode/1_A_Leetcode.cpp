#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
    long long countCommas(long long n) {
        ll a1 = pow(10,6) - 1000;
        ll a2 = 2*(pow(10,9) - pow(10,6));
        ll a3 = 3*(pow(10,12) - pow(10,9));
        ll a4 = 4*(pow(10,15) - pow(10,12));
        if(n >= 1000 && n < pow(10,6)){
            return n - 1000 + 1;
        }
        if(n >= pow(10,6) && n < pow(10,9)){
            ll ans = 2*(n - pow(10,6) + 1);
            ans += a1;
            return ans;
        }
        if(n >= pow(10,9) && n < pow(10, 12)){
            ll ans = 3*(n - pow(10,9) + 1);
            ans += a1 + a2;
            return ans;
        }
        if(n >= pow(10,12) && n < pow(10, 15)){
            ll ans = 4*(n - pow(10,12) + 1);
            ans += a1 + a2 + a3;
            return ans;
        }
        if(n == pow(10,15)){
            ll ans = 5;
            ans += a1 + a2 + a3 + a4;
            return ans;
        }
        return 0;
    }
int main() {
    cout<<countCommas(pow(10,6)+8);
}