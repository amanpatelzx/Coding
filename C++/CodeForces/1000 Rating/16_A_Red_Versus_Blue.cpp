#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    int n,r,b;
    cin>>n>>r>>b;

    int capa = b+1;
    int rPerCapa  = r/capa;
    int extraRed = r % capa;
    string ans;
    for(int i = 0; i < capa; i++){
        for(int j = 0; j < rPerCapa; j++){
            ans += 'R';
        }
        if(extraRed > 0){
            ans += 'R';
            extraRed--;
        }
        if(i != capa-1) ans += 'B';
        if(i == capa-1){
            while(extraRed--){
                ans += 'R';
            }
        }
    }
    
    cout<<ans<<"\n";
    
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}