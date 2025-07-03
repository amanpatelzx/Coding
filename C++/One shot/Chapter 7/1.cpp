#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of element in array : ";
    cin>>n;
    // 55 integer -->6,2,8,5,0    
    int a[n];// declaration
    for(int i=0; i<n; i++){
         cin>>a[i];
    }
    /* we can also take value from user using for loop */
    // a[0]=6; // setting up value
    // a[1]=2;
    // a[2]=8;
    // a[3]=5;
    // a[4]=0;
    // cout<<a[0]<<" ";
    // cout<<a[1]<<" ";
    // cout<<a[2]<<" ";
    // cout<<a[3]<<" ";
    // cout<<a[4]<<" ";
    /* or we can use */
    for(int i=0; i<n; i++){
        // cout<<a[i]<<" ";
        cout<<a[i]*2<<" ";//we can multiply it by 2
    }
    cout<<endl;
    a[0]=100; //we can change the or update the value of array like this
    for(int i=0; i<n; i++){
        // cout<<a[i]<<" ";
        cout<<a[i]*2<<" ";//we can multiply it by 2
    }



}
