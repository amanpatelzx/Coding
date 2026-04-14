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
        for(int i=0;i<n;i++) cin>>v[i];

        int i = 0, j = n-1;
        while(i < n && v[i] == 0){
            i++;
        }
        while(v[j] == 0 && j > i) j--;
        if(i > j){
            cout<<0<<"\n";
            return;
        }

        int zero=  0;
        while(i < n && i <= j){
            if( v[i] == 0){
                zero++;
                break;
            }
            i++;
        }

        cout<<zero+1<<"\n";
        
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