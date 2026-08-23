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
    int n, k; cin>>n>>k;
    k--;
    if(n % 2 == 0){
        int ans = k % n;
        cout<<(k%n)+1<<"\n";
    }
    else{
        int val = n/2;
        cout<<((k + (k/val)) % n) + 1<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}