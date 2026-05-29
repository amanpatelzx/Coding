#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
// void f(int n, vector<int>&v1){
//     for(int i = n/2; i >= 1; i--){
//         if(n % i == 0) v1.push_back(i);
//     }
// }
void solve(){
    // ll n; cin >> n;
    // ll val = n;
    // unordered_set<int> s ,s1;
    // while(val > 0){
    //     int rem = val % 10;
    //     val /= 10;
    //     if(rem != 0) s.insert(rem);
    // }
    // ll temp = 1;
    // vector<int> v;
    // for(auto &ele : s){
    //     v.push_back(ele);
    // }
    // sort(v.rbegin(), v.rend());
    // ll ans = 1;
    // int m = v.size();
    // for(int i = 0; i < m; i++){
    //     vector<int> v1;
    //     f(v[i], v1);
    //     for(int k = 0; k < v1.size(); k++){
    //         for(int j = i+1; j < m; j++){
    //             if(v[j] % v1[k] == 0) v[j] /= v1[k];
    //         }
    //     }
    // }
    // for(int i = 0; i < m; i++) ans *= v[i];
    // ll rem = n % ans;
    // ll res = n/ans;
    // if(rem != 0) res++;
    // cout<<res*ans<<"\n";
    ll n ; cin>>n;
    ll val = n;
    while(val){
        bool check = true;
        ll temp = val;
        while(temp > 0){
            ll rem = temp % 10;
            temp /= 10;
            if(rem != 0){
                if(val % rem != 0){
                    check = false;
                    break;
                }
            }
        }
        if(check){
            cout<<val<<"\n";
            return;
        }
        val++;
    }
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