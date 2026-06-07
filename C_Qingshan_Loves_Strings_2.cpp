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
    string s; cin>>s;

    int one = 0, zero = 0;
    For(i,0,n-1){
        if(s[i] == '1') one++;
        else zero++;
    }
    if(n % 2 == 1 || one != zero){
        cout<<-1<<"\n";
        return;
    }

    int low = 0, high = n-1;
    vi res;
    while(low < high){
        if(s[low] != s[high]){
            low++;
            high--;
        }
        else{
            if(s[low] == '0'){
                s = s.insert(high+1,"01");
                res.PB(high+1);
                high += 2;
                high--;
                low++;
            }
            else{
                if(low == 0){
                    s = s.insert(0,"01");
                    res.PB(low);
                    low++;
                    high++;
                }
                else{
                    s = s.insert(low,"01");
                    res.PB(low);
                    low++;
                    high++;
                }
            }
        }
        if(res.size() > 300){
            cout<<-1<<'\n';
            return;
        }
    }
    int m = res.size();
    cout<<m<<'\n';
    For(i,0,m-1) cout<<res[i]<<' ';
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