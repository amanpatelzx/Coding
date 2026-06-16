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
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    ll res = 0;

    pair<ll,ll> lastPosi = {0,0};
    ll x = 0, y = 0;
    ll maxDis = 1;
    ll currDis = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            x++;
            currDis = abs(lastPosi.F - x) + abs(lastPosi.S - y);
            maxDis = max(maxDis, currDis);
            if(currDis < maxDis){
                res++;
                if(s[i] == 'R') lastPosi = {x-1 , y};
                else if(s[i] == 'L') lastPosi = {x+1, y};
                else if(s[i] == 'U') lastPosi = {x , y-1};
                else lastPosi = {x , y+1};
                // x = 0, y = 0;
                maxDis = 1;
            }
        }
        else if(s[i] == 'L'){
            x--;
            currDis = abs(lastPosi.F - x) + abs(lastPosi.S - y);
            maxDis = max(maxDis, currDis);
            if(currDis < maxDis){
                res++;
                if(s[i] == 'R') lastPosi = {x-1 , y};
                else if(s[i] == 'L') lastPosi = {x+1, y};
                else if(s[i] == 'U') lastPosi = {x , y-1};
                else lastPosi = {x , y+1};
                // x = 0, y = 0;
                maxDis = 1;
            }
        }
        else if(s[i] == 'U'){
            y++;
            currDis = abs(lastPosi.F - x) + abs(lastPosi.S - y);
            maxDis = max(maxDis, currDis);
            if(currDis < maxDis){
                res++;
                if(s[i] == 'R') lastPosi = {x-1 , y};
                else if(s[i] == 'L') lastPosi = {x+1, y};
                else if(s[i] == 'U') lastPosi = {x , y-1};
                else lastPosi = {x , y+1};
                // x = 0, y = 0;
                maxDis = 1;
            }
        }
        else{
            y--;
            currDis = abs(lastPosi.F - x) + abs(lastPosi.S - y);
            maxDis = max(maxDis, currDis);
            if(currDis < maxDis){
                res++;
                if(s[i] == 'R') lastPosi = {x-1 , y};
                else if(s[i] == 'L') lastPosi = {x+1, y};
                else if(s[i] == 'U') lastPosi = {x , y-1};
                else lastPosi = {x , y+1};
                // x = 0, y = 0;
                maxDis = 1;
            }
        }
    }
    res++;
    cout<<res<<"\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}