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
    vi v(n+1); For(i,1,n+1) cin>>v[i];
    
    int res = 0;
    int i = 1, j = n;
    ll leftSum = 0, rightSum = 0;
    while(i <= j){
        if(leftSum >= rightSum){
            rightSum += v[j];
            if(leftSum == rightSum){
                res = max(res, i + n-j);
            }
            j--;
        }else{
            leftSum += v[i];
            if(leftSum == rightSum){
                res = max(res, i + n-j);
            }
            i++;
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