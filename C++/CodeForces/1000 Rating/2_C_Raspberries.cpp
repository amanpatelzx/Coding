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
    int n, k;
    cin>>n>>k;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin>>v[i];

    int ans = INT_MAX;

    if(k == 5){
        for(int i = 0; i < n; i++){
            int rem = v[i] % 5;
            if(rem == 0){
                cout<<0<<"\n";
                return;
            }
            else {
                ans = min(ans, k-rem);
            }
        }
        cout<<ans<<'\n';
        return;
    }
    ans = INT_MAX;
    if(k == 2 || k == 4){
        int even = 0, odd = 0;
        bool mark = false;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0) even++;
            else odd++;
            if(v[i] % 4 == 0) mark = true;
            int rem = v[i] % k;
            ans = min(ans, k-rem);
        }
        if(k == 2){
            if(even > 0){
                cout<<0<<"\n";
                return;
            }
            else{
                cout<<1<<"\n";
                return;
            }
        }
        if(k == 4){
            if(mark) {
                cout<<0<<"\n";
                return;
            }
            if(ans == 1){
                ans = min(ans, 1);
            }
            if(even > 1) {
                cout<<0<<"\n";
                return;
            }
            else if(even == 1){
                ans = min(ans, 1);
            }
            else{
                ans = min(ans, 2);
            }
            cout<<ans<<"\n";
            return;
        }
    }
    ans = INT_MAX;
    if(k == 3){
        for(int i = 0; i < n; i++){
            if(v[i] % 3 == 0){
                cout<<0<<"\n";
                return;
            }
            int rem = v[i] % k;
            ans = min(ans, k-rem);
        }
        cout<<ans<<'\n';
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