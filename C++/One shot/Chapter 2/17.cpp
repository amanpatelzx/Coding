#include<iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    char op;
    cin>>op;
    float b;
    cin>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/' and b==0){
        cout<<"Not defined";
    } 
    else {
        cout<<a/b;
    }
    


}