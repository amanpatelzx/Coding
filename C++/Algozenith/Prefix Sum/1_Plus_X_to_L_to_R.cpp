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
    //create a array from empty array according to queury
    int n; cin>>n;
    vector<vector<int>> q(n,vector<int>(3));
    For(i,0,n-1){
        For(j,0,2) cin>>q[i][j];
    }
    vector<int> v1 = {2,3,1,-2,0,-1};
    int m = v1.size();
    vector<int> v(m);//for updating range, here ;
    For(i,0,n-1){
        int L = q[i][0];
        int R = q[i][1];
        int X = q[i][2];
        v[L] += X;
        if(R+1 < m) v[R+1] -= X;
    }
    For(i,1,m-1){
        v[i] += v[i-1];
    }
    For(i,0,m-1) cout<<v[i]<<" ";
    cout<<"\n";
    For(i,0,m-1){// finally adding sum to the original array 
        v[i] += v1[i];
    }
    For(i,0,m-1) cout<<v[i]<<" ";
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
//testcase
/*
1
3
2 4 1
1 5 3
0 2 2
*/
//here q[i][0] = L, q[i][1] = R, q[i][2] = x; 
