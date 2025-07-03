#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the base then power : ";
    cin>>a>>b;
    c=a;
    for(int i=1;i<b;i++){
        c*=a;
    }
    cout<<a<<"^"<<b<<"="<<c;
}