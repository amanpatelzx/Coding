#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    int n;
    char ch;
    cin>>n;
    cin>>ch;
    string s;
    cin>>s;

    int res = 0;
    bool mark = false;
    int cnt = 0;
    if(ch == 'g'){
        cout<<0<<"\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(!mark && s[i] == ch){
            mark = true;
            cnt++;
        }
        else if(mark && s[i] == 'g'){
            res = max(res, cnt);
            cnt = 0;
            mark = false;
        }
        else {
            if(mark) cnt++;
        }
    }
    if(mark){
        for(int i = 0; i < n; i++){
            if(s[i] == 'g'){
                res = max(res, cnt);
                break;
            }
            cnt++;
        }
    }
    cout<<res<<"\n";
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}