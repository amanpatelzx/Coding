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
 
void solve(){
    int n; cin>>n;
    vl v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    set<int> s;
    for(auto &ele : v){
        s.insert(ele % 10);
    }
    if(s.count(0) || s.count(5)){
        for(int i = 0; i < n; i++){
            if(v[i] % 10 == 5){
                v[i] += 5;
            }
        }
        sort(v.begin(), v.end());
        if(v.front() == v.back()){
            cout<<"Yes\n";
            return;
        }
        else{
            cout<<"No\n";
            return;
        }
    }
    else{
        //3 -> 3 + 6 = 9
        //1 -> 1  = 1
        //4 -> 4 + 8 + 6 = 18
        //6 -> 6  = 6
        //7 -> 7 + 4 + 8 + 6 = 25
        //8 -> 8 + 6 = 14
        //9 -> 9 + 8 + 6 = 23

        for(int i = 0; i < n; i++){
            if(v[i] % 10 == 3) v[i] += 9;
            if(v[i] % 10 == 1) v[i] += 1;
            if(v[i] % 10 == 4) v[i] += 18;
            if(v[i] % 10 == 6) v[i] += 6;
            if(v[i] % 10 == 7) v[i] += 25;
            if(v[i] % 10 == 8) v[i] += 14;
            if(v[i] % 10 == 9) v[i] += 23;
        }
        int val = v[0] % 20;
        for(int i = 1; i < n; i++){
            if(v[i] % 20 != val){
                cout<<"No\n";
                return;
            }
        }
        cout<<"Yes\n";
        return;
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin>>_; while(_--)
    solve();
}