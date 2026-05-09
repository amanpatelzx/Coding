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
       ll n;
       cin>>n;
       vector<ll> v(n);
       for(int i = 0; i < n; i++) cin>>v[i];

       ll zero = 0, one = 0;
       for(int i = 0; i < n; i++){
            if(v[i] == 0) zero++;
            if(v[i] == 1) one++;
       }
       ll ans = one*(1LL << (zero));
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