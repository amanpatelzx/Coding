    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<ll> vl;
    typedef pair<int,int> pi;
    typedef pair<ll,ll> pl;
    typedef __int128_t lll;
    #define UM unordered_map
    #define US unordered_set
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair
    #define For(i,a,b) for (int i = a; i <= b; i++)

    void solve(){
        int z,o; cin>>z>>o;

        if(z-o >= 2 || o > 2*(z+1)){
            cout<<-1<<'\n';
            return; 
        }
        else{
            if(z >= o){
                for(int i = 1; i <= z+o; i++){
                    if(i % 2 == 1){
                        cout<<0;
                    }
                    else cout<<1;
                }
                cout<<'\n';
            }
            else{
                int k = o-z;

                for(int i = 0; i < z; i++){
                    cout<<1;
                    if(k > 0) {
                        cout<<1;
                        k--;
                    }
                    cout<<0;
                }
                while(k > 0){
                    cout<<1;
                    k--;
                }
            }
        }
    }
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
        t = 1;
        while(t--){
            solve();
        }
    }