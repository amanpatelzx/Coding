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
    ll n; cin>>n;
    vector<pl> v(n);
    for(int i = 0; i < n; i++){
        ll a,b; cin>>a>>b;
        v[i] = {a,b};
    }
    auto check = [&](int mid){
        ll l = 0, r = 0;
        for(int i = 0; i < n; i++){
            auto P = v[i];
            ll a = P.F, b = P.S;
            //l r a b, or a b l r , or a l b r, or l a r b , or l a b r, or a l r b
            if(r <= a){
                l = a;
                if(r + mid >= a) r = min(r+mid, b);
                else return false;
            }
            else if(b <= l){
                r = b;
                if(l - mid <= b) l = max(l-mid, a);
                else return false;
            }
            else if(a <= l && b <= r){
                r = b;
                l = max(a, l-mid);
            }
            else if(l <= a && r <= b){
                l = a;
                r = min(b, r+mid);
            }
            else if(l <= a && b <= r){
                r = b;
                l = a;  
            }
            else if(a <= l && r <= b){
                r = min(b, r+mid);
                l = max(a, l-mid);
            }
        }
        return true;
    };
    ll res = 0;
    ll low = 0, high = INT_MAX;
    while(low <= high){
        ll mid = low + (high - low ) / 2;
        if(check(mid)){
            res = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}