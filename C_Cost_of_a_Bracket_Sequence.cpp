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
#define For(i,a,b) for (int i = a; i <= b; i++)
int f(string &s, string &str){
    string ss;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(str[i] == '0') ss += s[i];
    }
    int cnt = 0;
    n = ss.size();
    int i=0, j= n-1; 
    while(i < j){
        if(ss[i]== '(' && ss[j] ==')'){
            cnt++;
            i++;
            j--;
        }
        else if(ss[i]== ')') i++;
        else if(ss[j] == '(')j--;
    }
    return cnt;
}
void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    string res = "";
    for(int i = 0; i < n; i++) res += '0';
    string ans = res;
    // int zero = 0, one = 0;
    // for(int i = 0; i < n; i++){
    //     int newZero;
    //     if(s[i] == '('){
    //         one++;
    //     }
    //     else{
    //         if(one > 0 && k > 0){
    //             res[i] = '1';
    //             k--;
    //         }
    //     }

    // }
    int oldK =k;
    int i = 0, j = n-1;
    while(i < j){
        if(s[i] == '(' && s[j] == ')'){
            if(k > 0){
                res[j] = '1';
                j--;
                k--;
                if(k == 0) break;
            }
            else break;
        }
        else if(s[i] == ')') i++;
        else if(s[j] == '(') j--;
    }
    i = 0, j = n-1, k = oldK;
    while(i < j){
        if(s[i] == '(' && s[j] == ')'){
            if(k > 0){
                ans[i] = '1';
                i++;
                k--;
                if(k == 0) break;
            }
            else break;
        }
        else if(s[i] == ')') i++;
        else if(s[j] == '(') j--;
    }
    
    if(f(s, ans) < f(s, res)){
        cout<<ans<<"\n";
    }
    else cout<<res<<"\n";
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