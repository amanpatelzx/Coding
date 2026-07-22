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
int f(string &s1, string &s2){
    int m = s1.size(), n = s2.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for(int i = m - 1 ; i >=0 ; i--){
        for(int j = n-1; j>=0 ; j--){
            if(s1[i] == s2[j]) dp[i][j] = 1 + dp[i+1][j+1];
            else dp[i][j] = max( dp[i+1][j], dp[i][j+1]);
        }
    }
    return dp[0][0];
}
void solve(){
    string a,b;
    cin>>a>>b;
    int n = a.size();
    int m = b.size();
    vector<int> prefA(n), prefB(m);
    for(int i = 0; i < n; i++){
        if(i) prefA[i] = prefA[i-1] + (a[i] - '0');
        else prefA[i] = (a[i] - '0');
    }
    for(int i = 0; i < m; i++){
        if(i) prefB[i] = prefB[i-1] + (b[i] - '0');
        else prefB[i] = (b[i] - '0');
    }
    for(int i = 0; i < n; i++) prefA[i] %= 10;
    for(int i = 0; i < m; i++) prefB[i] %= 10;
    if(prefA.back() != prefB.back()){
        cout<<-1<<"\n";
        return;
    }
    string s1,s2;
    for(int i = 0; i < n; i++){
        s1 += (char)(prefA[i] + '0');
    }
    for(int i = 0; i < m; i++){
        s2 += (char)(prefB[i] + '0');
    }
    int res = f(s1, s2);
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}