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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int maxi = 0;
    int black = 0, white = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'B') black++;
        else white++;
    }
    maxi = max(maxi , black);
    for(int i = k; i < n; i++){
        if(s[i] == s[i-k]){
            continue;
        }
        else {
            if(s[i] == 'B'){
                black++;
                white--;
                maxi = max(maxi, black);
            }
            else{
                white++;
                black--;
            }
        }
    }
    cout<<k-maxi<<"\n";
    
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