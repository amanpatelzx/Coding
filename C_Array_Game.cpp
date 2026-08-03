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
    ll n, k; cin>>n>>k;
    vl v(n); for(int i = 0; i < n; i++) cin>>v[i];
    if(k > 2){
        cout<<0<<"\n";
        return;
    }
    if(k == 1){
        ll mini = LLONG_MAX;
        for(int i = 0; i < n; i++){
            mini = min(mini, v[i]);
            for(int j = i+1; j < n; j++){
                mini = min(mini, abs(v[i] - v[j]));
            }
        }
        cout<<mini<<"\n";
        return;
    }
    else{
        ll mini = LLONG_MAX;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ll diff = abs(v[i]-v[j]);
                mini = min(mini, diff);
                auto it = lower_bound(v.begin(), v.end(), diff);
                if(it != v.end()){
                    int idx = it - v.begin();
                    mini = min(mini, abs(v[idx] - diff));
                    if(it != v.begin()){
                        it--;
                        mini = min(mini, abs(v[idx-1] - diff));
                    }
                }
                else{
                    it--;
                    int idx = it - v.begin();
                    mini = min(mini, abs(v[idx] - diff));
                }
            }
        }
        cout<<mini<<"\n";
        return;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}