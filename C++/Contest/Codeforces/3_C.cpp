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
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;

    int cnt = 0;
    int A = 0, B = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == '(') A++;
        else A--;

        if(b[i] == '(') B++;
        else B--;

        if(A < 0){
            if(cnt == 0){
                cout<<"NO\n";
                return;
            }
            else{
                A += 2;
                B -= 2;
                cnt--;
            }
        }
        if(B < 0){
            if(cnt == 0){
                cout<<"NO\n";
                return;
            }
            else{
                B += 2;
                A -= 2;
                cnt--;
            }
        }
        if(A < 0 || B < 0){
            cout<<"NO\n";
            return;
        }
        if(a[i] != b[i]) cnt++;
    }
    if( A == 0 && B == 0) cout<<"YES\n";
    else cout<<"NO\n";

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