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
    string s; cin>>s;
    string t; cin>>t;
    
    vector<pi> arr(n);
    for(int i = 0; i < n; i++){
        if(i){
            arr[i].F = arr[i-1].F + (s[i] == '1');
            arr[i].S = arr[i-1].S + (s[i] == '0');
        }else{
            arr[i].F = (s[i] == '1');
            arr[i].S = (s[i] == '0');
        }
    }
    bool flip = 0;
    for(int i = n-1; i >= 0; i--){
        char ch = s[i];
        if(flip){
            if(ch == '0') ch = '1';
            else if(ch == '1') ch = '0';
        }
        if(ch != t[i]){
            if(arr[i].F != arr[i].S){
                cout<<"NO\n";   
                return;
            }
            flip = !flip;
        }
    }
    cout<<"YES\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}