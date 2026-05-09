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
    string a,b;
    cin>>a>>b;
    
    int n = a.size();
    int m = b.size();

    int maxi = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[j] == a[i]){
                cnt = 0;
                for(int k = 0; k+j < m && k+i < n; k++){
                    if(a[i+k] == b[j+k]){
                        cnt++;
                        maxi =  max(maxi ,cnt);
                    }
                    else {
                        cnt = 0;
                        break;
                    }
                }
            }
        }
    }
    int res = n + m - 2*maxi;
    cout<<res<<"\n";
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