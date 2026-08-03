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
    vi v(n); For(i,0,n) cin>>v[i];
    vector<vi> arr(n, vector<int>(32));
    for(int i = 0; i < v.size(); i++){
        int val = v[i];
        int j = 0;
        while(val){
            arr[i][j] = val % 2;
            val/=2;
            j++;
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 32; j++){
            arr[i][j] += arr[i-1][j];
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 31; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    int q; cin>>q;
    while(q--){
        int l,k; cin>>l>>k;
        int kk = k;
        vi K;
        while(k){
            K.PB(k%2);
            k /= 2; 
        }
        // for(int i = 0; i < K.size(); i++){
        //     cout<<K[i]<<" ";
        // }
        // cout<<"\n";
        auto check = [&](int mid){
            int diff = mid - l +2;
            int tt = K.size();
            ll curr = 0;
            for(int j = 0; j < 32; j++){
                if(arr[mid][j] - (l-2 >= 0 ? arr[l-2][j] : 0) == diff){
                    curr |= (1 << j);
                }
            }
            return curr >= kk;
        };
        int res = -1;
        int low = l-1, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(mid)){
                res = mid+1;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        cout<<res<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}