#include<iostream>
using namespace std;
int main(){
    int a,b;
    char x;
    cout<<"Welcome to calcuator make by Aman Patel...\n";
    cout<<"Enter the First Digit -> ";
    cin>>a;
    cout<<"Enter the second no...-> ";
    cin>>b;
    cout<<"Enter the operator eg. +,-,/,*,& "<<endl;
    cin>>x;

    if(x=='+') cout<<a+b;
    else if(x=='-') cout<<a-b;
    else if(x=='*') cout<<a*b;
    else if(x=='%') cout<<(a%b);
    else if(x=='/' and b!=0) cout<<a/b;
    else if(x=='/' and b==0) cout<<"Not Defined";
    if (x!='+' || x!='-' || x!='*' || x!='/' || x!='%') cout<<"Invalid operator";
    






    }