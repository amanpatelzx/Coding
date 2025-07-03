#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
 void sort(int arr[9]){
    int crr[9];
    for(int i=0;i<9;i++){
    int a=INT_MAX,b;
    for(int j=i;j<9;j++){
        if(arr[j]<a) {
            a=arr[j];
            b=j;
        }
    }
       int temp=arr[i];
           arr[i]=a;
           arr[b]=temp;
    }
}
int main(){
    int arr[]={1,1,2,23,2,78,6,4,6};
    int brr[]={2,1,1,4,2,4,6,23,6};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<<brr[i]<<" ";
    }
    if(sizeof(arr)/4!=sizeof(brr)/4) cout<<"No its not equal";
    else {
        sort(arr);
        sort(brr);
    }
    bool flag=true;
     for(int i=0;i<9;i++){
        if(arr[i]!=brr[i]){
            flag=false;
            break;
        }
    }    
    cout<<endl;
    if(flag==true) cout<<"Yes ,equal matrix";
    if(flag==false) cout<<"No ,its not equal matrix";
}
