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
    int n; cin>>n;
    vi v(n); For(i,0,n) cin>>v[i];
    int l = -1, r = -1;
    int i = 0, j = n-1;
    int maxi = n, mini = 1;
    while(i < j){
        if(v[i] == mini || v[i] == maxi || v[j] == mini || v[j] == maxi){
            if(v[i] == mini){
                i++;
                mini++;
            }
            else if(v[i] == maxi){
                i++;
                maxi--;
            }
            else if(v[j] == mini){
                mini++;
                j--;
            }
            else if(v[j] == maxi){
                maxi--;
                j--;
            }
        }
        else{
            cout<<i+1<<" "<<j+1<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}