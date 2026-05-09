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
        ll x, n;
        cin>>x>>n;

        ll rem = n % 4;
        ll no = (n/4) * 4;
        bool mark = false;
        ll res = 0;
        for(int i =0 ; i < rem; i++){
            if(!mark){
                res += no+1;
                mark =true;
                no++;
            }
            else{
                res += -1*(no+1);
                no++;
            }
        }

        if(x % 2 == 0) cout<<x-res<<"\n";
        else cout<<x+1*res<<"\n";


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