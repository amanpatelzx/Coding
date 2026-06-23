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
    ll n,m,k,x,y; cin>>n>>m>>k>>x>>y;

    ll total = m*n;
    ll cycle = m*n + (n-2)*m;

    if(n == 1){
        ll res = k/(n*m);
        k = k % (n*m);
        ll mini = res;
        ll maxi = res;
        if(k > 0){
            maxi++;
            if(y <= k) res++;
        }
        cout<<maxi<<" "<<mini<<" "<<res<<"\n";
        return;
    }
    
    ll Fcycle = k / cycle;
    ll rem = k % cycle;
    
    ll maxi = 0;
    if(n == 2){
        maxi = Fcycle;
        if(rem > 0) maxi++;
    }
    else{
        ll a = Fcycle * 2;
        if(rem > m) a++;  
        if(rem > m*n) a++;
        
        ll b = Fcycle;
        if(rem > 0) b++;
        
        maxi = max(b, a);
    }

    ll mini = Fcycle;
    if(rem >= m*n) mini++; 

    if(x == 1){
        ll res = k/cycle;   
        k = k % cycle;
        
        if(k >= m*n){
            res++;
            k -= m*n;
            for(int i = n-1; i >= 1; i--){
                if(k == 0) break;
                for(int j = 1; j <= m; j++){
                    if(i == x && j == y) res++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                if(k == 0) break;
                for(int j = 1; j <= m; j++){
                    if(i == x && j == y) res++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        cout<<maxi<<" "<<mini<<" "<<res<<"\n";
        return;
    }
    else if(x == n){
        ll res = k/cycle;
        k = k % cycle;
        
        if(k >= m*n){
            res++;
            k -= m*n;
        }
        else{
            for(int i = 1; i <= n; i++){
                if(k == 0) break;
                for(int j = 1; j <= m; j++){
                    if(i == x && j == y) res++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        cout<<maxi<<" "<<mini<<" "<<res<<"\n";
        return;
    }
    else{
        ll res = k/cycle;
        k = k % cycle;
        res *= 2;
        
        if(k >= m*n){
            res++;
            k -= m*n;
            for(int i = n-1; i >= 1; i--){
                if(k == 0) break;
                for(int j = 1; j <= m; j++){
                    if(i == x && j == y) res++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                if(k == 0) break;
                for(int j = 1; j <= m; j++){
                    if(i == x && j == y) res++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        cout<<maxi<<" "<<mini<<" "<<res<<"\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    //cin>>_; while(_--)
    solve();
}