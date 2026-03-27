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
bool f(string &x , string&s){
    int i = 0, j = 0;
    while(j < s.size()){
        if(i == x.size()) break;
        if(s[j] == x[i]){
            i++;
            j++;
        }
        else{
            if(j == 0) i++;
            else{
                i = i-j+1;// critical point, understand again
                j = 0;//let x = aaab, s = aab;
            }
        }
    }
    if(j == s.size()) return true;
    else return false;
}
void solve(){
    int n, m;
    cin>>n>>m;
    string x, s;
    cin>>x>>s;
    int ans = 0;
    while (x.length() < s.length()) {
        x += x;
        ans++;
    }
    if(f(x , s)){
        cout<<ans<< "\n";
        return;
    }
    x += x;
    ans++;
    if(f(x , s)){
        cout<<ans<<"\n";
        return;
    }
    cout<< -1 <<"\n";
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