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
        for(int i=n-1; i >= 0; i--) cin>>v[i];
        int ans  =0;
        bool markZero = false;
        for(int i = 1; i < n; i++){
            if(v[i] >= v[i-1]){
                while(v[i] >= v[i-1]){
                    v[i] /= 2;
                    ans++;
                    if(v[i] == 0){
                        if(markZero){
                            cout<<-1<<"\n";
                            return;
                        }
                        markZero = true;
                    }
                }
            }
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