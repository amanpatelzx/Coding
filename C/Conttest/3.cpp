#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr){
    int count = 0;
    bool check = false;
    for(int i = 0; i < arr.size()-1; i++){
        if(check){
            check =false;
            continue;
        }
        if(arr[i] == 7 - arr[i+1] || arr[i] == arr[i+1]) {
            count++;
            check = true;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int j = 0 ; j < n; j++){
            int temp;
            cin>>temp;
            arr[j] = temp;
        }
        cout<<f(arr)<<endl;
    }
}