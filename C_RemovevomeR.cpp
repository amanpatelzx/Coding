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
    auto check = [&](int i, int j){
        while(i < j){
            if(s[i] != s[j]) return 0;
            i++;
            j--;
        }
        return 1;
    };
    if(check(0,n-1)){
        cout<<1<<"\n";
        return;
    }
    int one = 0,zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') zero++;
        else one++;
    }
    if(zero && one){
        if(s[0] == '0'){
            bool ok = 1;
            for(int i = 0; i < zero; i++){
                if(s[i] != '0'){
                    ok = 0;
                }
            }
            if(ok){
                cout<<2<<"\n";
                return;
            }
            else{
                cout<<1<<"\n";
                return;
            }
        }
        if(s[0] == '1'){
            bool ok = 1;
            for(int i = 0; i < one; i++){
                if(s[i] != '1'){
                    ok = 0;
                }
            }
            if(ok){
                cout<<2<<"\n";
                return;
            }
            else{
                cout<<1<<"\n";
                return;
            }
        }
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}