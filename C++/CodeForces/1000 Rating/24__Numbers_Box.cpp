#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin>>v[i][j];
    }
    int neg = 0;
	int mini = INT_MAX;
	int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (v[i][j] < 0)
				neg++;
				mini = min(mini, abs(v[i][j]));
				sum += abs(v[i][j]);
        }
    }

    if(neg % 2 == 0)
		cout<<sum<<"\n";
	else cout<<sum - 2*abs(mini)<<"\n";
    
}   
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}