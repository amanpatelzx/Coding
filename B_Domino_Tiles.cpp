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
 
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    //11, 10, 01, 00
    string s1,s2,s3,s4;
    if(s[0] != '?'){
        s1 += s[0];
        s2 += s[0];
        s3 += s[0];
        s4 += s[0];
    }
    else{
        s1 += '1';
        s2 += '1';
        s3 += '0';
        s4 += '0';
    }
    if(s[1] != '?'){
        s1 += s[1];
        s2 += s[1];
        s3 += s[1];
        s4 += s[1];
    }
    else{
        s1 += '1';
        s2 += '0';
        s3 += '1';
        s4 += '0';
    }
    int cnt = 0;
    set<string> mp;
    mp.insert(s1);
    mp.insert(s2);
    mp.insert(s3);
    mp.insert(s4);
    for(auto &ele : mp){
        string tt = ele;
        if(tt[0] == '0' && tt[1] == '0'){
            bool ok = 1;
            for(int i = 0; i < n; i += 4){ 
                if(s[i] != '?' && s[i] != '0') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '0') ok = 0;
            }
            for(int i = 2; i < n; i += 4){
                if(s[i] != '?' && s[i] != '1') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '1') ok = 0;
            }
            if(ok) cnt++;
        }
        else if(tt[0] == '1' && tt[1] == '1'){
            bool ok = 1;
            for(int i = 0; i < n; i += 4){ 
                if(s[i] != '?' && s[i] != '1') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '1') ok = 0;
            }
            for(int i = 2; i < n; i += 4){
                if(s[i] != '?' && s[i] != '0') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '0') ok = 0;
            }
            if(ok) cnt++;
        }
        else if(tt[0] == '0' && tt[1] == '1'){
            bool ok = 1;
            if(s[0] != '?' && s[0] != '0') ok = 0;
            for(int i = 1; i < n; i += 4){ 
                if(s[i] != '?' && s[i] != '1') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '1') ok = 0;
            }
            for(int i = 3; i < n; i += 4){
                if(s[i] != '?' && s[i] != '0') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '0') ok = 0;
            }
            if(ok) cnt++;
        }
        else if(tt[0] == '1' && tt[1] == '0'){
            bool ok = 1;
            if(s[0] != '?' && s[0] != '1') ok = 0;
            for(int i = 1; i < n; i += 4){ 
                if(s[i] != '?' && s[i] != '0') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '0') ok = 0;
            }
            for(int i = 3; i < n; i += 4){
                if(s[i] != '?' && s[i] != '1') ok = 0;
                if(i+1 < n && s[i+1] != '?' && s[i+1] != '1') ok = 0;
            }
            if(ok) cnt++;
        }
    }
    cout<<cnt<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}