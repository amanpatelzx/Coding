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
Observation -> n -> n/2 can left and n/2 get out of turnament;
            -> cnt = 1;
            n/4 can be tournament -
            -> cnt = 2;
            ...till n/x > 1;

            eg -> 10;
            cnt = 1; n = 5;
            cnt = 2 , n = 3;
            cnt = 3 , n = 2;
            cnt = 4 , n = 1;
            so winner can play 

            above is not working

            Lets try new idea ->

            i have to maximise the no. of winning can winner win;

            lets n = 20;
            10 + 10;

            one more things -> f(n+1) = f(n) + f(n-1);
            so this is given in question;
            this looks like fibonaci series;
            so lets draw it for 10;

            1 1 2 3 5 8 13

            so here i can store this in array in pre compute , then do lowerbound on this;


*/
void solve(){
    ll n; cin>>n;
    // ll cnt = 0;
    // while(n != 1){
    //     n = (n+1)/2;
    //     cnt++;
    // }
    // cout<<cnt<<'\n';
    // vl v(n);
    lll Pprev = 1;
    lll prev = 1;
    lll curr = 0;
    ll cnt = 0;
    // v[0] = 1;
    // v[1] = 1;
    while(curr < n){
        curr = prev + Pprev;
        if(curr <= n) cnt++;
        Pprev = prev;
        prev = curr;
    }
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}