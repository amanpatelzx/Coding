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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    unordered_map<char,int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int m = mp.size();
    int cntOdd = 0;
    for(auto &ele : mp){
        if(ele.second % 2 == 1) cntOdd++;
    }
    // //case -> cntOdd > k;
    // if(cntOdd > k){
    //     int p = cntOdd - k;
    //     if(p == 1 && (n-k) % 2 == 1) cout<<"YES\n";
    //     else cout<<"NO\n"; 
    // }
    // else if(cntOdd == k){
    //     if((n-k) % 2 == 0) cout<<"YES\n";
    //     else cout<<"NO\n";
    // }
    // else{
    //     int p = k - cntOdd;
    //     if((n-k) % 2 == 0 && p % 2 == 0) cout<<"YES\n";
    //     else if((n-k) % 2 == 1 && p % 2 == 1) cout<<"YES\n";
    //     else cout<<"NO\n";
    // }
    if(cntOdd > k+1) cout<<"NO\n";
    else cout<<"YES\n";
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

