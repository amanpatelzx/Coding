#include <bits/stdc++.h>
using namespace std;
int main(){
    string nums1 = "12563534";
    string nums2 = "24546345";
    int n = nums1.size();
    int m = nums2.size();
    vector<vector<int>> arr(m , vector<int>(m+n, 0));
    for(int i = 0; i < m; i++){
        int carry = 0;
        int val1 = nums2[m-1-i] - '0';
        for(int j = 0; j < n; j++){
            int val2 = nums1[n-1-j] - '0';
            int val = val1*val2 + carry;
            carry = val / 10;
            val = val % 10;
            arr[i][i+j] = val;
            if(j == n - 1) arr[i][i+j+1] = carry;
        }
    }
    vector<int> result(m+n, 0);
    int carry = 0;
    for(int i = 0; i < arr[0].size(); i++){
        int sum = 0;
        for(int j = 0; j < arr.size(); j++){
           sum += arr[j][i];
        }
        sum = sum + carry;
        carry = sum / 10;
        sum %= 10;
        result[i] = sum;
    }
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Carry = "<<carry<<endl;

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" "; 
    }
    string ans = "";
    int k = result.size();
    for(int i = k-1; i >= 0; i--){
        if(i == k-1 && result[i] == 0) continue;
        ans += result[i] + '0';
    }
    cout<<endl;
    cout<<ans;
}