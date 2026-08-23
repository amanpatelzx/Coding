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
    int n, q; cin>>n>>q;
    vi v(n), Q(q);
    For(i,0,n) cin>>v[i];
    For(i,0,q) cin>>Q[i];

    stack<int> a,b;
    for(int i = 0; i < n; i++){
        b.push(v[i]);
    }
    while(!b.empty()){
        int val = b.top();
        b.pop();
        a.push(val);
    }
    for(int i = 0 ; i < q; i++){
        int target = Q[i];
        while(!a.empty()){
            int tt = a.top();
            a.pop();
            if(tt == target){
                cout<<(int)b.size()+1<<" ";
                while(!b.empty()){
                    a.push(b.top());
                    b.pop();
                }
                a.push(tt);
                break;
            }
            else{
                b.push(tt);
            }
        }
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