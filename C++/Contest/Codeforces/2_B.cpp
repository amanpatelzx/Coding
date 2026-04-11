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
bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void solve(){
    int n , k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int idx;
    cin>>idx;
    idx--;
    int result = 0;
    int ans1 = 0;
    for(int i = 0; i <= idx; i++){
        if(v[idx] == 0){
            if(i == 0 && v[i] == 0){
                while(v[i] == 0){
                    i++;
                    if(i > idx) break;
                }
            }
            if(i > idx) break;
            if(v[i] != v[i-1]){
                ans1++;
            }
        }
        else{
            if(i == 0 && v[i] == 1){
                while(v[i] == 1){
                    if(i > idx) break;
                    i++;
                }
            }
            if(i > idx) break;
            if(v[i] != v[i-1]){
                ans1++;
            }
        }
    }
    int ans2 = 0;
    for(int i = n-1; i >= idx; i--){
        if(v[idx] == 0){
            if(i == n-1 && v[i] == 0){
                while(v[i] == 0){
                    if(i < idx) break;
                    i--;
                }
            }
            if(i < idx) break;
            if(v[i] != v[i+1]){
                ans2++;
            }
        }
        else{
            if(i == n-1 && v[i] == 1){
                while(v[i] == 1){
                    if(i < idx) break;
                    i--;
                }
            }
            if(i < idx) break;
            if(v[i] != v[i+1]){
                ans2++;
            }
        }
        
    }
    result = max(ans1, ans2);
    cout<<result<<"\n";
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