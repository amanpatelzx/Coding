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
        string s;
        cin>>s;
        int n = s.size();
        int noAB = 0, noBA = 0;
        string str = "..";
        for(int i = 0; i < n-1; i++){
            str[0] = s[i];
            str[1] = s[i+1];

            if(str == "ab") noAB++;
            else if(str == "ba") noBA++;
        }

        if(noAB == noBA){
            cout<<s<<"\n";
            return;
        }
        if(noAB > noBA){
            for(int i = n-1; i >= 0; i--){
                if(s[i] == 'b'){
                    s[i] = 'a';
                    break;
                }
            }
            cout<<s<<"\n";
        }
        if(noAB < noBA){
            for(int i = n-1; i >= 0; i--){
                if(s[i] == 'a'){
                    s[i] = 'b';
                    break;
                }
            }
            cout<<s<<"\n";
        }


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