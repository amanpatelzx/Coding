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
    vi a(n), b(n);
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];

    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            left = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(b[i] != a[i]){
            right = i;
            break;
        }
    }

    while(left-1 >= 0){
        if(b[left-1] <= b[left]) left--;
        else break;
    }
    while(right+1 < n){
        if(b[right] <= b[right+1]) right++;
        else break;
    }
    sort(a.begin(),a.end());
    if(a == b){
        cout<<1<<" "<<n<<"\n";
        return;
    }
    cout<<left+1<<' '<<right+1<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}