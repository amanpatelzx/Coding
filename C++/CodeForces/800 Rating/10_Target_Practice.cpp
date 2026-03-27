#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int ans = 0;
     for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            char ch;
            cin>>ch;
            if(ch == 'X'){
               if(i == 1 || j == 1 || i == 10 || j == 10) ans += 1; 
               else if(i == 2 || j == 2 || i == 10-1 || j == 10-1) ans += 2; 
               else if(i == 3 || j == 3 || i == 10-2 || j == 10-2) ans += 3; 
               else if(i == 4 || j == 4 || i == 10-3 || j == 10-3) ans += 4;
               else if(i == 5 || j == 5 || i == 10-4 || j == 10-4) ans += 5;
            }
        }
     }
     //int ring = min({i, j, 11 - i, 11 - j}); use this logic for better answer. my above code ,
     // i don't how it get accepted but , it may give wroung answer
     cout<<ans<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}