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
        for(int i = 0; i < n; i++) cin>>v[i];

        int ans =  v[n-1]-v[0];
        int maxi = 0;
        for(int i  =0; i < n-1; i++){
            ans = max(ans, v[i] - v[i+1]);
            maxi = max(maxi , v[i]);
        }
        for(int i = 0; i < n-1; i++){
            ans = max(ans, v[n-1] - v[i]);
        }
        for(int i = 1; i < n; i++){
            ans = max(ans, v[i] - v[0]);
        }
        ans = max(ans , maxi - v[0]);
        cout<<ans<<"\n";
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