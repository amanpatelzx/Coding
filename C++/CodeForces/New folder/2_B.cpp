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

unordered_map<int, unordered_map<int,unordered_map<int,bool>>> dp;
bool f(string &str, string &s , int i , int j , int k){
    if(i > j) return true;
    if(dp.count(i) && dp[i].count(j) && dp[i][j].count(k)) return dp[i][j][k];
    bool check = false;
    if(s[k] == '?'){
        if(str[i] == str[j]){
             check = (check || f(str , s, i+1, j , k+1));
        }
        else {
            check = (check || f(str, s, i+1, j ,k+1));
            check = (check || f(str, s, i, j-1 ,k+1));
        }
    }
    if(s[k] == 'a'){
        if(str[i] != 'a' && str[j] != 'a') return false;
        else {
            if(str[i] == 'a') check = (check || f(str, s, i+1, j, k+1));
            if(str[j] == 'a') check = (check || f(str, s, i, j-1, k+1));
        }
    }
    if(s[k] == 'b'){
        if(str[i] != 'b' && str[j] != 'b') return false;
        else {
            if(str[i] == 'b') check = (check || f(str, s, i+1, j, k+1));
            if(str[j] == 'b') check = (check || f(str, s, i, j-1, k+1));
        }
    }
     return dp[i][j][k] = check;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x;
        string s;
        cin>>x;
        cin>>s;
        string str = "";
        dp.clear();
        for(int i = 1; i <= x; i++){
            if(i%2 == 1) str += 'a';
            else str += 'b';
        }
        if(f(str, s , 0 , x-1 , 0)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}