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
    int n; cin>>n;
    vi v(n);
    For(i,0,n-1) cin>>v[i];
    vi temp = v;
    sort(temp.begin(), temp.end());
    if(temp[n-1] != n){
        cout<<"NO\n";
        return;
    }
    UM<int,int> mp;
    for(int i = 0; i < n; i++) mp[v[i]]++;
    
    UM<int,int> ansMp;
    for(auto &ele : mp){
        if(ele.second > 2){
            cout<<"NO\n";
            return;
        }
        if(ele.second == 1){
            ansMp[ele.first] = ele.first;
        }
    }
    int aa = 1;
    for(int i = 1; i < n; i++){
        if(temp[i] == temp[i-1]){
            while(mp.count(aa)) aa++;
            ansMp[temp[i]] = aa;
            aa++;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(temp[i] < (i+1)){
            cout<<"NO\n";
            return;
        }
    }
    
    vi a(n), b(n);
    US<int> s;
    for(int i =  0; i < n; i++){
        if(!s.count(v[i])){
            a[i] = v[i];
            s.insert(v[i]);
            mp[v[i]]--;
            // sa.insert(v[i]);
        }
        else{
            b[i] = v[i];
            mp[v[i]]--;
            // sb.insert(v[i]);
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            a[i] = ansMp[b[i]];
        }
        else{
            b[i] = ansMp[a[i]];
        }
    }
    cout<<"YES\n";
    for(int i = 0; i < n; i++) cout<<a[i]<<" ";
    cout<<'\n';
    for(int j = 0; j < n; j++) cout<<b[j]<<' ';
    cout<<'\n';
    
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