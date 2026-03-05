#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> result;
    int n = 4;
    for (int b = 0; b < (1<<n); b++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if(b&(1<<i)) subset.push_back(i);
        }
        result.push_back(subset);
    }
    int k = result.size();
    for(int i = 0; i < k; i++){
        for(int j = 0; j < result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}