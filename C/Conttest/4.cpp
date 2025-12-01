#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> ans;
    int t;
    cin>>t;
    vector<vector<int>> ans1(t);
    for( int i =0; i<t; i++){
        int maxIdx=INT_MIN;
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        for(int  j = 0; j<n; j++){
            int m;
            cin>>m;
            vector<int> temp(m);
            for(int k = 0; k<m; k++){
                cin>>temp[k];
            }
            maxIdx = max(maxIdx , m);
            arr[j] = temp;
        }
        int last = arr[n-1].size();
        for(int a = 0 ; a<last ; a++){
            ans[a] = arr[n-1][a];
        }
        if(n > 1){
            int p = n-2;
            while(p>=0 && last < maxIdx){
            if(arr[p].size()<last) p--;
            else{
                ans[last] = arr[p][last];
                last++;
            }
        }
        }
        ans1[i] = ans;

    }
    for(int i = 0; i<t;i++){
        for(int j = 0;j<ans1[i].size();j++){
            cout<<ans1[i][j]<<" ";
        }
        cout<<"\n";
    }
}