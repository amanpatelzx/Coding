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
    vector<vi> v(n+1, vector<int>(4));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 4; j++) cin>>v[i][j];
    }
    for(int k = n; k >= 0; k--){
        int cnt = 0;
        int curr = 1;
        for(int i = 1; i <= n; i++){
            int left = curr;
            int right = k-curr+1;
            if((left > v[i][1] || left < v[i][0]) && (right > v[i][3] || right < v[i][2])){
                cnt++;
                curr++;
                if(cnt == k){
                    cout<<k<<"\n";
                    return;
                }
            }
        }
    }
    cout<<0<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}