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
    vector<int> v(n);
    int a = 1;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        a =__gcd(a,v[i]);
    }
    if(a > n) cout<<"NO\n";
    else{
        int temp = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                temp = min(temp , __gcd(v[i],v[j]));
            }
        }
        if(temp <= 2) cout<<"YES\n";
        else cout<<"NO\n";
    }

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

