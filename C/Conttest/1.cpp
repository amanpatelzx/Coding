#include <bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr){
    vector<bool> visited(arr.size() + 1 , false);
    for(int i = 1; i <= arr.size()-1; i++){
        if(visited[i]) continue;
        vector<int> idx;
        vector<int> nums;
        for(int j = i; j < arr.size(); j = j*2){
            visited[j] = true;
            idx.push_back(j);
            nums.push_back(arr[j]);
        }
        sort(idx.begin() , idx.end());
        sort( nums.begin() , nums.end());
        for(int k = 0; k < idx.size(); k++){
            if(idx[k] != nums[k]) return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int j = 1 ; j <= n; j++){
            int temp;
            cin>>temp;
            arr[j] = temp;
        }
        if(f(arr)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}