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
vector<int> prime;
vector<bool> vis(100010);
void seive(){
    for(int i = 2; i <= 100000; i++){
        if(vis[i]) continue;
        else{
            for(int j = 2*i; j <= 100000; j += i){
                vis[j] = 1;
            }
        }
    }
    for(int i = 2; i <= 100000; i++){
        if(!vis[i]) prime.PB(i);
    }
}
void solve(){
    int n; cin>>n;
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    unordered_map<int,int> mp;
    vi arr = v;
    sort(arr.begin(), arr.end());
    if(arr.front() == arr.back()){
        cout<<"YES\n";
        return;
    }
    for(int i = 0; i < n; i++){
        int val = v[i];
        for(int i = 2; i*i <= val; i++){
            if(val % i == 0){
                while(val % i == 0){
                    mp[i]++;
                    val/= i;
                }
            }
        }
        if(val > 1) mp[val]++;
    }
    // for(auto &ele : mp){
    //     cout<<ele.first<<" "<<ele.second<<"\n";
    // }
    // cout<<"\n";
    int mini = INT_MAX;
    for(auto &ele : mp){
        if(ele.S % n != 0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // seive();
    int _;
    cin>>_; while(_--)
    solve();
}