    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;
    
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair
    
    //2 1 1
    //1 1 2
    void solve(){
        ll a,b,c;
        cin>>a>>b>>c;

        bool a1 = false,b1 = false,c1 = false;

        //a b c -> xa b c -> b - xa = c -b -> (2b - c) % a == 0 cout<<YES;
        if((2*b-c) % a == 0 && (2*b-c)/a > 0) a1 = true;

        //a b c -> a xb c -> c-bx = bx -a -> 2bx = a+c -> if((a+c) % 2*b == 0)
        if(((a+c)) % (2*b) == 0 && (a+c)/(2*b) > 0) b1 = true;

        //a b cx -> cx-b = b -a -> if((2b-a) % c == 0)
        if((2*b-a) % c == 0 && (2*b-a)/c > 0) c1 = true;

        if(a1 || b1 || c1) cout<<"Yes\n";
        else cout<<"No\n";
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