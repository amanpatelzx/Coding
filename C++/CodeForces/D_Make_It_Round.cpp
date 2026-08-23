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

ll p2[19];
ll p5[19];
void solve() {
		int n, m; cin>>n>>m;
		int c2 = 0, c5 = 0;

		int temp = n;
		while(temp % 2 == 0){
			c2++; 
			temp /= 2;
		}

		temp = n;
		while(temp % 5 == 0){
			c5++; 
			temp /= 5;
		}
		for(int i = 18; i >= 0; i--){
            int a2 = max(0, i - c2);
            int a5 = max(0, i - c5); 

            ll tt = p2[a2] * p5[a5];
            if(tt <= m){
                int maxi = m - m % tt;
                cout<<1LL*maxi*n<<'\n';
                return;
            }
		}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    p2[0] = 1;
	p5[0] = 1;
    for(int i = 1; i <= 18; i++){
        p2[i] = 2 * p2[i - 1];
        p5[i] = 5 * p5[i - 1];
    }
    int _;
    cin>>_; while(_--)
    solve();
}