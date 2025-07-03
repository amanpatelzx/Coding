#include<iostream>
using namespace std;//sum of array
int main(){
    int a[]={3,4,3,2,6,5,8};// in int one no. store 4 
    int n=sizeof(a)/4; //this will give no. of element
    int sum=0;
    for(int i=0;i<n; i++){
        sum+=a[i];
    }
    cout<<sum;
}