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
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> s;
        for(int i  =1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(is_prime(i)) s.insert(i);
                if(is_prime(n/i)) s.insert(n/i);
            }
        }
        ll ans = 1;
        for(auto &it : s){
            ans *= (ll)(it);
        }
        // for(auto &it : s){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        cout<<ans<<"\n";
    }

}