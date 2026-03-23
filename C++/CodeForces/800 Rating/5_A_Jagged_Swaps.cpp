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
    for(int i = 0; i <n; i++){
        cin>>v[i];
    }
    int maxi = v[0];
    bool check = false;
    int mini = v[0];
    for(int i = 1; i < n-1; i++){
        mini = min(mini , v[i]);
        if(v[i] < maxi){
            cout<<"NO\n";
            check = true;
            break;
        }
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            swap(v[i], v[i+1]);
        }
        maxi = max(maxi, v[i]);
        mini = min(mini , v[i]);
    }
    if(!check && v[0] != mini) cout<<"No\n";
    else if(!check) cout<<"Yes\n";
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