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
       string s = to_string(n);
       int m = s.size();

       int res = 0;
       bool five = false;
       bool zero = false;
        for(int i = m-1; i >= 0; i--){
            if(!five && s[i] == '5') five = true;
            else if(five && (s[i] == '2' || s[i] == '7')) break;
            else res++;
        }

       int ans = 0;
       for(int i = m-1; i >= 0; i--){
            if(!zero && s[i] == '0') zero = true;
            else if(zero && (s[i] == '5' || s[i] == '0')) break;
            else ans++;   
        }
       ans = min(ans ,res);
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