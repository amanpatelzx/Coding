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

int f(int i, int j){
    cout<<"? "<<i+1<<" "<<j+1<<endl;
    int x; cin>>x;
    return x;
}
void solve(){
    int n; cin>>n;
    if(n == 1){
        cout<<"! ";
        cout<<1<<"\n";
        return;
    }
    vi v(n);
    //3 4 -> 3 % 4 = 3, 4 % 3 = 1 -> max no is smaller one
    int i = 0, j = 1;
    while(j < n && i < n){
        int a = f(i,j);
        int b = f(j,i);
        if(a > b){
            v[i] = a;
            i = j;
            j++;
        }
        else{
            v[j] = b;
            j++;
        }
    }
    v[i] = n;
    cout<<"! ";
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}