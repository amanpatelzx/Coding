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
    vector<int> v1(n), v2(n);
    for(int i = 0; i < n; i++) cin>>v1[i];
    for(int i = 0; i < n; i++) cin>>v2[i];

    unordered_map<int,int> mp1, mp2;

    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(v1[i] == v1[i-1]) cnt++;
        else{
            mp1[v1[i-1]] = max(mp1[v1[i-1]] , cnt);
            cnt = 1;
        }
    }
    mp1[v1[n-1]] = max(mp1[v1[n-1]] , cnt);

    cnt = 1;
    for(int i = 1; i < n; i++){
        if(v2[i] == v2[i-1]) cnt++;
        else{
            mp2[v2[i-1]] = max(mp2[v2[i-1]] , cnt);
            cnt = 1;
        }
    }
    mp2[v2[n-1]] = max(mp2[v2[n-1]] , cnt);
    cnt = 1;

    int res = 0;
    for(int i = 0; i < n; i++){
        int temp = mp1[v1[i]];
        if(mp2.count(v1[i])) temp += mp2[v1[i]];
        res = max(res, temp);
    }

    for(int i = 0; i < n; i++){
        res = max(res, mp2[v2[i]]);
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