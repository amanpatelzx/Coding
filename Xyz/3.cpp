#include<iostream>
#include<complex>
#include<cmath>
using namespace std; // // this sign means just commentating it will not impact any coading things
int main(){
    float a,b,c;
    cout<<"Enter the coefficent of ax^2+bx+c as a,b,c -> ";
    cin>>a;
    cin>>b;
    cin>>c;

    float d,m,n,s,q;

    d=b*b-4*a*c;
    m=(-b+sqrt(d))/2*a;
    n=(-b-sqrt(d))/2*a;
    s=(-b)/2*a;
    q=sqrt(-d)/2*a;
    
    
    
    cout<<"Discreminant is "<<d<<" ,";
    if (d>=0){ 
    cout<<"Its real roots are "<<m<<", "<<n;
    }
    else cout<<"Its root is imaginary... \n"<<"Roots are "<<"--> "<<s<<"+"<<q<<"i"<<"\n"<<"        --> "<<s<<"-"<<q<<"i";
    
}