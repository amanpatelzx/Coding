#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
 void sort(int arr[9]){
    int crr[sizeof(arr)];
    int a,b;
    for(int i=0;i<9;i++){
    for(int j=i;j<9;j++){
        if(arr[i]<INT_MAX) {
            a=arr[j];
            b=j;
        }
    }
       int temp=arr[i];
           arr[i]=a;
           arr[b]=temp;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,1,2,23,2,4,6,4,6};
    int brr[]={2,1,1,4,2,4,6,23,6};
    int s=0,b=0;
    if(sizeof(arr)/4!=sizeof(brr)/4) cout<<"No its not equal";
    else sort(arr);    
    // if(s==1 and b==1) cout<<"Yes ,equal matrix";
    // else cout<<"Yes ,equal matrix";
}
