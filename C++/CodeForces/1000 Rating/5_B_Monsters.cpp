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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i < n; i++) cin>>v[i];
    vector<int> temp;
    vector<vector<int>> nums;
    for(int i = 0; i < n; i++){
        if(v[i] % k == 0){
            temp.push_back(i);
        }
        else{
            int rem = v[i] % k;
            nums.push_back({rem, -i});
        }
    }
    sort(nums.rbegin(), nums.rend());
    sort(temp.begin(), temp.end());

    int mark = false;
    if(temp.size() > 1) mark = true;
    int m = temp.size();
    for(int i = 0; i < m;i++){
        cout<<temp[i]+1<<" ";
    }
    for(int i = 0; i < nums.size(); i++){
        cout<<-nums[i][1]+1<<" ";
    }
    cout<<"\n";

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