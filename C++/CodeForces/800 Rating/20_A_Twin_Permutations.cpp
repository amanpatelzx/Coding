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

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> arr = v;
    sort(v.begin(),v.end());
    unordered_map<int,int> mp;
    int i = 0; 
    int j = n-1;
    while(i <= j){
        mp[v[i]] = v[j];
        mp[v[j]] = v[i];
        i++;
        j--;
    }
    for(int i  =0; i < n; i++){
        cout<<mp[arr[i]]<<" ";
    }
    cout<<"\n";
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

