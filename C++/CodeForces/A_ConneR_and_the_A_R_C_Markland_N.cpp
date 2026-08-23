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
    int n,s,k; cin>>n>>s>>k;
    vi v(k);
    for(int i = 0; i < k; i++) cin>>v[i];
    sort(v.begin(),v.end());
    bool ok = 1;
    for(int i = 0; i < k; i++){
        if(v[i] == s){
            ok = 0;
            break;
        }
    }
    if(ok){
        cout<<0<<"\n";
        return;
    }
    int idx = 0;
    for(int i = 0; i < k; i++){
        if(v[i] == s){
            idx = i;
            break;
        }
    }
    int res = 0;
    int left = 0, right = 0;
    if (s == n) right = 1e9;
    for(int i = idx+1; i < k; i++){
        if(v[i] - v[i-1] == 1){
            right++;
            if(i == k-1 && v[i] == n) right = 1e9;
        }
        else{
            break;
        }
    }
    if (s == 1) left = 1e9;
    for(int i = idx-1; i >= 0; i--){
        if(v[i+1] - v[i] == 1){
            left++;
            if(i == 0 && v[i] == 1){
                left = 1e9;
            }
        }
        else{
            break;
        }
    }
    cout<<min(left, right)+1<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}