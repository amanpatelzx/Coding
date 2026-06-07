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
#define For(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];

    map<int,int> mp; // dont use unordered_map, becouse in codeforces ans interview, its give tle, becosue they make test case such that
    int distinctCnt = 0;
    int tail = 0, head = -1;

    int ans = 0;

    while(tail < n){
        while(head + 1 < n && (mp[nums[head+1]] >= 1 || distinctCnt < K)){
            head++;
            
            if(mp[nums[head]] == 0){
                distinctCnt++;
            }
            mp[nums[head]]++;  
        }
        ans += head - tail + 1;
        if(tail > head){
            tail++;
            head = tail-1;
        }
        else{
            mp[nums[tail]]--;
            if(mp[nums[tail]] == 0) distinctCnt--;
            tail++;
        }
    }
    cout<<ans<<"\n";
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

