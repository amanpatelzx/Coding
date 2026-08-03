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
/*
    2 -> 111  or 000 or 1100
    3 -> 1111 or 0000 or 11100 or ....
    4 -> 11111 
    .....
    eg n = 14 -> k = 5;
    k = k/2 = 2*3 + 1;
    11111000010101010

    n = 4, k = 3;
    2,1 -> 11100
*/
void solve(){
    int n, k; cin>>n>>k;
    int m = k/2;
    int rem = k % 2;
    string res;
    for(int i = 0; i < (m+rem)+1; i++){
        res += '1';
    }
    for(int i = 0; i < (m+1); i++){
        res += '0';
    }
    int N = res.size();
    int diff = n - N;
    if(diff < 0){
        cout<<-1<<"\n";
        return;
    }
    if(diff == 0){
        cout<<res<<"\n";
        return;
    }
    res = '0' + res;
    for(int i = 0; i < diff-1; i++){
        if(i % 2 == 0) res += '1';
        else res += '0';
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