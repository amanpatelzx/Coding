#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 0) cout <<0<<"\n";
        int ans = 1;
        int x = a[0];
        int y = a[0];
        for (int i = 1; i < n; i++) {
            if(a[i] >= x + 1 && a[i] <= y + 1) {
                y = a[i];
            } 
            else{
                x = a[i];
                y = a[i];
                ans++;
            }
        }
        cout<<ans<<"\n";
    }

}