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
    int n,m; cin>>n>>m;
    vector<vi> v0,v1;
    for(int i = 0; i < m ; i++){
        int x; cin>>x;
        int y,z;
        cin>>y>>z;
        if(x == 1){
            v1.push_back({y,z});
        }
        else v0.push_back({y,z});
    }

    sort(v1.begin(), v1.end());
    
    vector<vi> v1P;
    
    if(v1.size() > 0){
        int last = v1[0][0];
        int justLast = v1[0][1];
        for(int i = 1; i < v1.size(); i++){
            int l = v1[i][0];
            int r = v1[i][1];
            if(l <= justLast){
                justLast = max(justLast, r);
            }
            else{
                v1P.PB({last, justLast});
                last = l;
                justLast = r;
            }
        }
        v1P.PB({last, justLast});
    }

    for(int i = 0; i < v1P.size(); i++){
        int l = v1P[i][0];
        int r = v1P[i][1];
        for(int j = 0; j < v0.size(); j++){
            if(v0[j][0] >= l && r >= v0[j][1]){
                cout<<"NO\n";
                return;
            }
        }
    }

    vi ans(n);
    int a = 1e4;
    for(int i = 0; i < n; i++){
        ans[i] = a;
        a--;
    }
    for(int i = 0; i < v1P.size(); i++){
        auto &tmp = v1P[i];
        int l = tmp[0];
        int r = tmp[1];
        
        int val = ans[l-1]; 
        
        for(int j = l-1; j < r; j++){
            ans[j] = val; 
        }
    }
    
    cout<<"YES\n";
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" "; 
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}