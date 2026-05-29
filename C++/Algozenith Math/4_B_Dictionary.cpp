//https://codeforces.com/problemset/problem/1674/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    char a = s[0];
    char b = s[1];
    int first = a-'a';
    int second = b - 'a';
    int res = 25*first + second;
    if(a > b) res++;
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