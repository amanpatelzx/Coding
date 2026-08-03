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
    if(n == 1){
        cout<<"NO\n";
        return;
    }
    int maxi = 0;
    vi arr = v;
    sort(arr.begin(), arr.end());
    int k = arr[(n+1)/2-1];
    k++;
    bool tt = binary_search(arr.begin(), arr.end(), k);
    if(tt){
        cout<<"NO\n";
        return;
    }
    bool ok = 1, ok1 = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] < k){
                ok = 0;
                break;
            }
        }
        else{
            if(v[i] > k){
                ok = 0;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] > k){
                ok1 = 0;
                break;
            }
        }
        else{
            if(v[i] <= k){
                ok1 = 0;
                break;
            }
        }
    }
    bool ok2 = 1, ok3 =1;
    k = v[n/2];
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] < k){
                ok2 = 0;
                break;
            }
        }
        else{
            if(v[i] > k){
                ok2 = 0;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] > k){
                ok3 = 0;
                break;
            }
        }
        else{
            if(v[i] <= k){
                ok3 = 0;
                break;
            }
        }
    }

    if(ok || ok1 || ok2 || ok3){
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
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