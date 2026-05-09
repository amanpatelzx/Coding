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
       ll a,b;
       cin>>a>>b;

       if(a == b){
            cout<<0<<' '<<0<<"\n";
            return;
       }
       ll ans = abs(a-b);
       ll inc = min( (ans+a) % ans , ans - (ans+a)% ans);
       cout<<ans<<" "<<inc<<"\n";
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