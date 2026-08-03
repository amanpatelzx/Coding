// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 100;
    vector<int> dp(n);
    dp[1] = 0;
    //1 2
    dp[2] = 1;
    for(int i = 3; i < n; i++){
        dp[i] = (i-1)*(dp[i-1] + dp[i-2]);
    }
    for(int i = 1; i < n; i++){
        cout<<i<<" -> "<<dp[i]<<"\n";
    }
}