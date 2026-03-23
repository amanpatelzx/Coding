// https://codeforces.com/problemset/problem/2193/F
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
vector<vector<ll>> dp;
ll f(vector<vector<int>> &arr , int i, bool check){
    if(i == arr.size()-1) return 0;
    
    if(dp[i][check] != -1) return dp[i][check];
    ll ans = 0;

    ll a, b;
    if(!check){
        ll currDist = arr[i][1] - arr[i][0];
        a = currDist + abs(arr[i+1][1] - arr[i][0]) + f(arr, i+1, false);
        b = currDist + abs(arr[i+1][0] - arr[i][0]) + f(arr, i+1 , true);
        ans = min(a, b);
    }
    else {
        ll currDist = arr[i][1] - arr[i][0];
        a = currDist + abs(arr[i+1][1] - arr[i][1]) + f(arr, i+1, false);
        b = currDist + abs(arr[i+1][0] - arr[i][1]) + f(arr, i+1 , true);
        ans = min(a, b);
    }
    return dp[i][check] = ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n, Ax, Ay, Bx, By;
        cin>>n>>Ax>>Ay>>Bx>>By;
        vector<vector<int>> nums(n , vector<int>(2));

        for(int i = 0; i < n; i++){
            cin>>nums[i][0];
        }
        for(int i = 0; i < n; i++){
            cin>>nums[i][1];
        }

        sort(nums.begin(), nums.end());
        vector<vector<int>> arr;
        int first = nums[0][1] , last;
        bool check = false;
        arr.push_back({Ay, Ay});
        for(int i = 0; i < n; i++){
            int first = nums[i][1];
            int last = nums[i][1];

            while(i+1 < n && nums[i][0] == nums[i+1][0]){
                i++;
                last = nums[i][1];
            }
            arr.push_back({first ,last});
        }
        arr.push_back({By , By});
        // for(int i = 0; i < nums.size(); i++){
        //     cout<<nums[i][0]<<","<<nums[i][1]<<"  ";
        // }
        // cout<<" -> ";
        // for(int i = 0; i < arr.size(); i++){
        //     cout<<arr[i][0]<<","<<arr[i][1]<<"  ";
        // }
        // cout<<"\n";
        dp.clear();
        dp.resize(arr.size(), vector<ll>(2, -1));
        ll ans = f(arr, 0 ,true);
        ll result = ans + abs(Ax - Bx);
        cout<<result<<"\n";
    }

}