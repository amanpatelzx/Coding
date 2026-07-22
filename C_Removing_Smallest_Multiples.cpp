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
/*
    3 5 7 4
    1 4 5    
*/
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> s1(n+1),s3(n+1) , s22(n+1);
    set<int> s2;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            s1[i+1] = 1;
        }
        else{
            s2.insert(i+1);
            s22[i+1] = 1;
        }
    }
    ll res = 0;
    for(auto &ele : s2){
        int val = ele;
        if(!s22[val]) continue;
        // s2.erase(val);
        if(!s3[val]) res += val;
        s3[val] = 1;

        int tmp = 2*val;
        while(tmp <= n && !s1[tmp]){
            if(s22[tmp] && !s3[tmp]){
                res += val;
                // s2.erase(tmp);
                s3[tmp] = 1;
            }
            tmp += val;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}