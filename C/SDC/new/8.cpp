#include<iostream>
#include<climits>
using namespace std;
int ans(int arr[6],int a){
    if(arr[a+1]-arr[a]!=1) return a+1;
    ans(arr,a+1);
}
int main(){
    int arr[]={1,2,3,5,6,7};
     for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(arr[0]!=0) cout<<"Missing no. is -> 0";
    else cout<<"Missing no. is -> "<<ans(arr,0);
}
