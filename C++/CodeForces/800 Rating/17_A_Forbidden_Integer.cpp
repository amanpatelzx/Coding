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

void solve(){
    int x,k,n;
    cin>>n>>k>>x;
    int count = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    if(x == 1){
        if(k == 1) cout<<"No\n";
        else if(k == 2 && n % 2 == 1) cout<<"No\n";
        else if(n % 2 == 0){
            cout<<"Yes\n";
            cout<<n/2<<"\n";
            for(int i = 0; i < n/2; i++){
                cout<<2<<" ";
            }
            cout<<"\n";
        }
        else{
            three++;
            count++;
            n -= 3;
            two = n/2;

            cout<<"Yes\n";
            cout<<(two + three)<<"\n";
            for(int i =0; i < two; i++){
                cout<<2<<" ";
            }
            for(int i =0; i < three; i++){
                cout<<3<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Yes\n";
        cout<<n<<"\n";
        for(int i = 0; i < n; i++){
            cout<<1<<" ";
        }
        cout<<"\n";
    }

    
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

