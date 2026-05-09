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
    cin>>n;
    string s;
    cin>>s;

    unordered_set<char> mp1, mp2;

    vector<int> v1(n), v2(n);

    for(int i = 0; i < n; i++){
        if(!mp1.count(s[i])){
            mp1.insert(s[i]);
            if(i == 0){
                v1[0]++;
            }
            else{
                v1[i] = v1[i-1]+1;
            }
        }
        else{
            v1[i] = v1[i-1];
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(!mp2.count(s[i])){
            mp2.insert(s[i]);
            if(i == n-1){
                v2[i]++;
            }
            else{
                v2[i] = v2[i+1]+1;
            }
        }
        else{
            v2[i] = v2[i+1];
        }
    }

    int res = 0;

    for(int i = 0; i < n-1; i++){
        res = max(res, v1[i] + v2[i+1]);
    }
    cout<<res<<'\n';
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