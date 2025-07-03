#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[]={3,1,5,4,14,8,25,9};
    int arr[]={-3,-1,-5,-4,-14,-8,-25,-9};
     for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/4;i++){
    int a=INT_MAX,b;
    for(int j=i;j<sizeof(arr)/4;j++){
        if(arr[j]<a) {
            a=arr[j];
            b=j;
        }
    }
       int temp=arr[i];
           arr[i]=a;
           arr[b]=temp;
    }
    
    cout<<"The second Largest element is "<<arr[sizeof(arr)/4-2];
}
