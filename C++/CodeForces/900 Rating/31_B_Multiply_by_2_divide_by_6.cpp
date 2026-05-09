#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
// vector<int> prime;
// void seive(){
//     vector<bool> v(100004, false);
//     for(int i = 2; i < 100000; i++){
//         if(!v[i]){
//             for(int j = i*i; j < n; j += i){
//                 v[j] = true;
//             }
//         }
//     }
//     for(int i = 2; i < 100000; i++){
//         if(!v[i]) prime.push_back(i);
//     }
// }
void solve(){
    int n;
    cin>>n;
    

    // int m = prime.size();
    // for(int i = 2; i < m; i++){
    //     if(n % 2 ! = 0){
    //         cout<<-1<<"\n";
    //         return;
    //     }
    // }

    int count = 0;
     while(n > 1){
        if(n % 6 == 0){
            count++;
            n /= 6;
        }
        else{
            if(n % 3 != 0){
                cout<<-1<<"\n";
                return;
            }
            else{
                n *= 2;
                count++;
            }
        }
     }
     cout<<count<<"\n";
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