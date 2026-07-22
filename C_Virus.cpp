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
    int n, m; cin>>n>>m;
    vl v(m); For(i,0,m) cin>>v[i];
    sort(v.begin(), v.end());

    vl diff(m);
    for(int i = 0; i < m; i++){
        if(i == m-1){
            diff[i] = abs(n-1 - v[i] + v[0]);
        }
        else diff[i] = abs(v[i+1] - v[i]-1);
    }
    sort(diff.rbegin(), diff.rend());
    ll time = 0;
    ll res = 0;
    // for(int i = 0; i < m; i++) cout<<diff[i]<<' ';
    // cout<<" -> ";
    for(int i = 0; i < m; i++){
        if(diff[i] - 2*time > 0){
            if(diff[i] - 2*time <= 2){
                res++;
                time++;
            }
            else{
                res += diff[i] - 2*time-1;
                time += 2;
            }
        }
        else{
            break;
        }
    }
    cout<<n-res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}