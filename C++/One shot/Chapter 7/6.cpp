#include<iostream>
using namespace std;//sum of array
int main(){
    int a[]={3,4,5};// in int one no. store 4 
    int n=sizeof(a)/4; //this will give no. of element
    int b=0;
    for(int i=1;i<n; i++){
        b=a[0]*a[i];
        cout<<b;
    }
    
}