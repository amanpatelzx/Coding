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
    int n,m, x, y;
    cin>>n>>m>>x>>y;

    //case 1 -> upperleft to bootom right
    int a = m+n + (m-x + n-y);

    //case 2 -> upperright to bootom left;
    int b = m+n + (x+y);

    if(a > b){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        return;
    }
    else {
        cout<<n<<" "<<1<<" "<<1<<" "<<m<<"\n";
        return;
    }
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