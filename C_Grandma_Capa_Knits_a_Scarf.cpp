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
int cnt = 0;
bool f(string &s, int i, int j, char ch){
    cnt = 0;
    while(i <= j){
        if(s[i] != s[j]){
            if(s[i] == ch) i++;
            else if(s[j] == ch) j--;
            else{
                return 0;
            }
            cnt++;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string t = s;
    reverse(t.begin(),t.end());
    if(t == s){
        cout<<0<<"\n";
        return;
    }
    int i = 0, j = n-1;
    bool ok = 0;
    while(i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            int A = 1e7, B = 1e9;
            bool ok1 = f(s,i,j,s[i]);
            if(ok1){
                A = cnt;
            }
            bool ok2 = f(s,i,j,s[j]);
            if(ok2){
                B = cnt;
            }
            int res = min(A,B);
            if(res < 1e7){
                cout<<res<<"\n";
                return;
            }
            break;
        }
    }
    cout<<-1<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}