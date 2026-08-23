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

bool f(vector<int> &v, int k){
    int n = v.size();
    int i = 0, j = n-1;
    while(i < j){
        if(v[i] != v[j] && v[i] != k && v[j] != k){
            return 0;
        }
        else if(v[i] != v[j]){
            if(v[i] == k){
                i++;
            }
            else{
                j--;
            }
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}
void solve(){
    int n; cin>>n;
    vi v(n); For(i,0,n) cin>>v[i];

    int i = 0, j = n-1;
    bool res = 1;
    while(i < j){
        if(v[i] != v[j]){
            res &= f(v, v[i]);
            if(res){
                cout<<"YES\n";
                return;
            }
            res = 1;
            res &= f(v, v[j]);
            break;
        }
        i++;
        j--;
    }
    if(res){
        cout<<"YES\n";
        return;
    }else{
        cout<<"NO\n";
        return;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}