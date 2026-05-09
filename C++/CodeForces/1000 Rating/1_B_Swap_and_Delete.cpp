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
    string s;
    cin>>s;

    int n = s.size();

    unordered_set<int> set;

    int one = 0, zero = 0;
    for(int i =0; i < n; i++){
        if(s[i] == '1') one++;
        else zero++;
    }
    string t = s;
    for(int i = 0; i < n; i++){
        if(zero > 0 &&  s[i] == '1'){
            t[i] = '0';
            zero--;
            set.insert(i);
        }
        if(zero == 0) break;
    }
    for(int i = 0; i < n; i++){
        if(!set.count(i) && one > 0 && s[i] == '0'){
            t[i] = '1';
            one--;
        }
        if(one == 0) break;
    }
    int idx = n;
     for(int i = 0; i < n; i++){
        if(t[i] == s[i]){
            idx = i;
            break;
        }
     }

     cout<<n-idx<<'\n';
      
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