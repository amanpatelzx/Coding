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
//this problem is counting max length of subarry after fliping k zero to 1;
//keep in mind this tempalated;
void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin>>nums[i];

    int tail = 0, head = -1;

    int cntZero = 0;
    int ans = 0;

    while(tail < n){
        while(head + 1 < n && (nums[head+1] == 1 && cntZero < K)){
            head++;
            if(nums[head] == 0) cntZero++;
        }
        ans = max(ans, head - tail + 1);
        if(tail > head){
            tail++;
            head = tail-1;
        }
        else{
            if(nums[tail] == 0) cntZero--;
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

