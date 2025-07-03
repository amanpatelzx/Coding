#include<iostream>
using namespace std;
int main(){
    int x,a,n,s=0,d;
    cout<<"Enter the no. a,d,n--> ";
    cin>>a>>d>>n;                
    s=n*(2*a+(n-1)*d)/2;
    cout<<"Sum of n term of AP is : "<<s;
}