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
    eg-> 10001
*/
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') zero++;
    }
    if(zero == 1){
        cout<<"BOB\n";
    }
    else if(zero % 2 == 0){
        cout<<"BOB\n";
    }
    else{
        cout<<"ALICE\n";
    }
    // if(n&1){
    //     //10001 -> 5/2 = 2;
    //     if(s[n/2] == '0'){
    //         if(zero == 2){
    //             cout<<"DRAW\n";
    //             return;
    //         }
    //         else if(zero == 1){
    //             cout<<"BOB\n";
    //             return;
    //         }
    //         else {
    //             cout<<"ALICE\n";
    //         }
    //     }
    //     else{
    //         cout<<"BOB\n";
    //         return;
    //     }
        
    // }
    // else{
    //     if(zero % 2 == 0){
    //         if(zero == 0){
    //             cout<<"ALICE\n";
    //             return;
    //         }
    //         int Z = zero/2;
    //         if(Z % 2 == 0){
    //             cout<<"DRAW\n";
    //             return;
    //         }
    //         else{
    //             cout<<"BOB\n";
    //             return;
    //         }
    //     }
    //     else{

    //     }
    // }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}