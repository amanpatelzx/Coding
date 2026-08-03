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
bool f(string &s){
    int left = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ')') left--;
        else left++;
        if(left < 0) return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int left = 0, right = 0;
    for(auto &ele : s){
        if(ele == '(') right++;
        else left++;
    }
    if(left != right){
        cout<<"-1\n";
        return;
    }
    string t = s;
    reverse(t.begin(),t.end());
    if(f(t) || f(s)){
        cout<<1<<"\n";
        for(int i = 0; i < n; i++){
            cout<<1<<" ";
        }
        cout<<"\n";
        return;
    }
    vector<int> res(n);
    int color = 1;
    bool ok = 0;

    stack<int> s1, s2;
    for(int i = 0; i < n; i++){
        char ch = s[i];
        if(ch == '('){
            s1.push(i);
        }   
        else{
            if(!s1.empty()){
                ok = 1;
                res[s1.top()] = color;
                res[i] = color;
                s1.pop();
            }
            else{
                s2.push(i);
            }
        }
    }
    if(!s1.empty() || !s2.empty()){
        if(s1.size() == s2.size()){
            if(ok) color++;
            while(!s1.empty()){
                res[s1.top()] = color;
                s1.pop();
            }
            while(!s2.empty()){
                res[s2.top()] = color;
                s2.pop();
            }
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<color<<"\n";
    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}