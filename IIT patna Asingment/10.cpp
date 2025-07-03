#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,x,y;
    cout<<"To Divide one complex no. to another\n Enter Real and imaginary part of 1st complex no. \n";
    cin>>a>>b;
    cout<<"Enter Real and imgainary part of 2nd complex no. \n";
    cin>>x>>y;
    float m,n;
    m=(a*x+b*y)/(x*x+y*y);
    n=(b*x-y*a)/(x*x+y*y);
    cout<<"Result is "<<m<<"+"<<n<<"i";

    }
