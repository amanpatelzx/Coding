#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin>>v[i];
        }
        vector<ll> ans(n);
        for(int i = 0; i < n; i++){
            int m = 0, s = 0;
            for(int j = i+1; j < n; j++){
                if(v[j] > v[i]) m++;
                if(v[j] < v[i]) s++;
            }
            ans[i] = max(m ,s);
        }
        for(int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }

}