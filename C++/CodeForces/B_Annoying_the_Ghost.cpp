#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i < b; i++)
 
void solve(){
    ll n; cin>>n;
    vl a(n), b(n);
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];

    vl at = a, bt = b;
    sort(at.rbegin(), at.rend());
    sort(bt.rbegin(), bt.rend());

    For(i,0,n){
        if(at[i] > bt[i]){
            cout <<-1<<"\n";
            return;
        }
    }
    int res = 0;
    For(i,0,n){
        int idx = -1;
        For(j,i,n){
            if(a[j] <= b[i]){
                idx = j;
                break;
            }
        }
        if(idx == i) continue;
        else{
            for(int j = idx - 1; j >= i; j--){
                swap(a[j],a[j+1]);
                res++;
            }
        }
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}