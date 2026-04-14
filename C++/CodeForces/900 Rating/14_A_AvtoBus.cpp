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
        
        ll mini = 0, maxi = 0;

        int i = 3;
        ll a = n, b = n;
        while(i--){
            if(a % 4 == 0){
                maxi += a/4;
                a = 0;
                break;
            }
            else{
                if(a < 6) break;
                a = a-6;
                maxi++;
            }
        }
        i = 3;
        while(i--){
            if(b % 6 == 0){
                mini += b/6;
                b = 0;
                break;
            }
            else{
                if(b < 4) break;
                b = b-4;
                mini++;
            }
        }

        if(a > 0 && b > 0){
            cout<<-1<<"\n";
            return;
        }
        if(a == 0 && b > 0){
            cout<<maxi<<" "<<maxi<<"\n";
        }
        if(a > 0 && b == 0){
            cout<<mini<<" "<<mini<<"\n";
        }
        else cout<<mini<<" "<<maxi<<"\n";

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