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
        ll n ,c, k;
        cin>>n>>c>>k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            if(v[i] <= c){
                ll t = c - v[i];
                if(k > t){
                    k -= t;
                    c += c;
                }
                else{
                    c += v[i] + k;
                    k = 0;
                }
            }
        }
        cout<<c<<"\n";
    }

}