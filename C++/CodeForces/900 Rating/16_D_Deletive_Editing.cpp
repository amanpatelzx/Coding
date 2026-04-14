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
        string s, t;
        cin>>s>>t;

        unordered_map<char,int> mp1,mp2;
        for(int i = 0; i < s.size(); i++){
            mp1[s[i]]++;
        }
        for(int j = 0; j < t.size(); j++){
            mp2[t[j]]++;
        }
        for(auto &ele : mp1){
            if(mp2.count(ele.first)) mp1[ele.first] -= mp2[ele.first];
        }
        int n = s.size();
        for(auto &ele : mp1){
            int a = ele.second;
            for(int i = 0; i < n; i++){
                if(a > 0 && s[i] == ele.first){
                    s[i] = '#'; 
                    a--;
                }
            }
        }
        string temp;
        for(int i = 0; i < n; i++){
            if(s[i] != '#') temp += s[i];
        }
        if(temp == t) cout<<"Yes\n";
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