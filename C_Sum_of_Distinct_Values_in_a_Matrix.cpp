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
#define For(i,a,b) for (int i = a; i < b; i++)
 
void solve(){
    int n, m, x, y; cin>>n>>m>>x>>y;
    vector<bool> A(n + m + 1, 0), B(n + m + 1, 0);
    vi a(x), b(y);
    For(i,0,x){
        cin>>a[i];
        A[a[i]] = 1;
    }
    For(i,0,y){
        cin>>b[i];
        B[b[i]] = 1;
    }
    vector<vi> v(n, vi(m, 0));

    int p = 0, q = 0, r = 0;
    int limit = n + m - 1;
    vi rows, cols;
    vi both;

    for(int i = n + m; i >= 1; i--){
        if(!A[i] && !B[i]) continue;
        if(r == limit) break; 
        if(A[i] && !B[i] && p == n) continue;
        if(!A[i] && B[i] && q == m) continue;
        r++;
        
        if(A[i] && !B[i]){
            rows.PB(i);
            p++;
        }
        else if(!A[i] && B[i]){
            cols.PB(i);
            q++;
        }
        else{
            both.PB(i); 
        }
    }
    for(int w : both){
        if(p < n){
            rows.PB(w);
            p++;
        }
        else{
            cols.PB(w);
            q++;
        }
    }
    if(p == n){
        int tt = 0;
        for(auto &ele : rows){
            For(j,0,m) v[tt][j] = ele;
            tt++;
        }
        int c = 0;
        for(auto &ele : cols){
            For(i,0,n) v[i][c] = ele;
            c++;
        }
    } 
    else{
        int c = 0;
        for(auto &ele : cols){
            For(i,0,n) v[i][c] = ele;
            c++;
        }
        int tt = 0;
        for(auto &ele : rows){
            For(j,0,m) v[tt][j] = ele;
            tt++;
        }
    }
    set<int> st;
    For(i,0,n){
        For(j,0,m){
            if(v[i][j]) st.insert(v[i][j]);
        }
    }
    ll res = 0;
    for(auto &ele : st) res += ele;
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}