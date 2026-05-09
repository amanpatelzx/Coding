#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
int res;
void f(int a, int b, int ans){
    if(ans >= res  || ans > 100) return;
    if(a == 0){
        res = min(res, ans);
        return;
    }

    f(a/b, b, ans+1);
    f(a, b+1, ans+1);
}
void solve(){
    int a,b;
    cin>>a>>b;
    res =  INT_MAX;
    if(b > 1) f(a,b,0);
    else if(b == 1) f(a , b+1, 1);  
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