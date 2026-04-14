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
        for(int i =0;i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int maxi = 1;
        int a = 1;
        for(int i  =1; i < n; i++){
            if(v[i] == v[i-1]){
                a++;
                maxi = max(maxi, a);
            }
            else a = 1;
        }
        int ans = 0;
        int b = maxi;
        while(b < n){
            ans++;
            if(b+b > n){
                ans += n - b;
            }
            else{
                ans += b;
            }
            b = b+b;
        }
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