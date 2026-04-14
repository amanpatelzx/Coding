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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int left = 0, right = 0;
    int lcnt = 1, rcnt = 1;
    for(int i =0; i < n; i++){
        if(s[i] == '<'){
            rcnt = 1;
            lcnt++;
            left = max(left , lcnt);
        }
        else{
            lcnt =1;
            rcnt++;
            right= max(right , rcnt);
        }
    }
    cout<<max(left,right)<<"\n";
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