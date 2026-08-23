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
    int n, s; cin>>n>>s;
    vi v(n); For(i,0,n) cin>>v[i];
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) sum++;
    }
    if(sum < s){
        cout<<-1<<'\n';
        return;
    }
    if(sum == s){
        cout<<0<<"\n";
        return ;
    }
    // i think i can use sliding window here of s lenght;

    vector<int> one;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) one.PB(i);
    }
    int m  = one.size();
    int res = 1e6;
    for(int i = s-1; i < m; i++){
        int right = 0;
        int left = 0;
        if(i-s >= 0) left = one[i-s]+1;
        if(i+1 < m) right = n - one[i+1];
        res = min(res , left + right);
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