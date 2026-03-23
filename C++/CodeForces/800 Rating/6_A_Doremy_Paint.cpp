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

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i = 0; i <n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    if(mp.size() > 2) cout<<"No\n";
    else{
        if(mp.size() == 2){
            int a = -1, b;
            for(auto ele : mp){
                if(a == -1) a = ele.second;
                else b = ele.second;
            }
            if(abs(a-b) == 0 || abs(a-b) == 1) cout<<"Yes\n";
            else cout<<"No\n";
        } 
        else cout<<"Yes\n";
    }
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