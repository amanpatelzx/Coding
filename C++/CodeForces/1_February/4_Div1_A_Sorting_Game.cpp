#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin>>s;

        string str = s;
        sort(str.begin(), str.end());
        if(s == str) cout<<"Bob\n";
        else{
            vector<int> v;
            for(int i =0; i < n; i++){
                if(s[i] != str[i]){
                    v.PB(i+1);
                }
            }
            cout<<"Alice\n";
            cout<<v.size()<<"\n";
            for(int i = 0; i < v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
    }

}