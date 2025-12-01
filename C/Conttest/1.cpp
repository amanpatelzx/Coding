#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>> arr(t, vector<int>(2 , 0));
    for(int i= 0 ; i<t;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i= 0 ; i<t;i++){
            if(arr[i][1]%2==0) cout<<0<<"\n";
            else cout<<arr[i][0]<<"\n";
    }
    
}