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
#define For(i,a,b) for (int i = a; i <= b; i++)
 
void solve(){
    int n; cin>>n;
    vi v(n); For(i,0,n-1) cin>>v[i];
    vector<pi> arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = {v[i], i};
    }
    sort(arr.begin(), arr.end());
    vi a ,b;
    bool ok = false;
    ll sumA = 0, sumB = 0;
    int low = 0, high = n-1;
    while(low <= high){
        if(high == n-1){
            sumA += arr[high].F;
            a.PB(arr[high].S);
            high--;
        }
        else{
            if(b.size() < a.size()){
                if(sumB < sumA){
                    sumB += arr[high].F;
                    b.PB(arr[high].S);
                    high--;
                }
                else{
                    sumB += arr[low].F;
                    b.PB(arr[low].S);
                    low++;
                }
            }
            else if(b.size() == a.size()){
                if(sumB <= sumA){
                    sumB += arr[high].F;
                    b.PB(arr[high].S);
                    high--;
                }
                else{
                    sumA += arr[high].F;
                    a.PB(arr[high].S);
                    high--;
                }
            }
            else{
                if(sumA <= sumB){
                    sumA += arr[high].F;
                    a.PB(arr[high].S);
                    high--;
                }
                else{
                    sumA += arr[low].F;
                    a.PB(arr[low].S);
                    low++;
                }
            }
        }
    }
    cout<<(int)a.size()<<"\n";
    for(int i = 0; i < (int)a.size(); i++) cout<<a[i]+1<<" ";
    cout<<"\n";
    cout<<(int)b.size()<<"\n";
    for(int i = 0; i < (int)b.size(); i++) cout<<b[i]+1<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}