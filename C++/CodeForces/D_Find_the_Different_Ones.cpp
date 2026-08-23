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
    vi v(n); for(int i = 0; i < n; i++) cin>>v[i];
    vi arr;
    arr.PB(1);
    for(int i = 1; i < n; i++){
        if(v[arr.back()-1] != v[i]){
            arr.PB(i+1);
        }
    }
    // for(int i = 0; i < arr.size(); i++) cout<<arr[i]<<" ";
    // cout<<"\n";
    int q; cin>>q;
    while(q--){
        int l, r; cin>>l>>r;

        auto it = lower_bound(arr.begin(), arr.end(), l);
        
        if(it == arr.end()){
            cout<<-1<<" "<<-1<<"\n";
        }
        else{
            int idx = it - arr.begin();
            // cout<<idx<<"\n";
            if(arr[idx] != l && arr[idx] <= r){
                cout<<l<<" "<<arr[idx]<<"\n";
            }
            else if(arr[idx] > r){
                cout<<-1<<" "<<-1<<"\n";
            }
            else if(arr[idx] == l){
                if(idx+1 < arr.size()){
                    if(arr[idx+1] <= r){
                        cout<<l<<" "<<arr[idx+1]<<"\n";
                    }
                    else{
                        cout<<-1<<" "<<-1<<'\n';
                    }
                }
                else{
                    cout<<-1<<" "<<-1<<'\n';
                }
            }
            else{
                cout<<-1<<" "<<-1<<"\n";
            }
        }
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