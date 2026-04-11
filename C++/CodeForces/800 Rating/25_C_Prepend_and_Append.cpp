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
    string s;
    cin>>s;

    int i = 0;
    int j = n-1;
    while(i <= j){
        if(s[i] == s[j]) break;
        else {
            i++;
            j--;
        }
    }
    cout<<j-i+1<<"\n";
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

