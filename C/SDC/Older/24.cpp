#include<iostream>
using namespace std;
int main(){
    int x,a,b=0,c=1;
    cout<<"Enter the no.--> ";
    cin>>x;
    cout<<"0 1 ";
    for(int i=0;i<x-1;i++){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<" ";
       }
       cout<<endl;
       cout<<"The Fibonacci number "<<x<<" is : "<<c;
}