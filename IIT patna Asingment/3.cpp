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
    else cout<<"Its root is imaginary... \n"<<"Roots are "<<"--> "<<s<<"+"<<q<<"i"<<"\n"<<"          --> "<<s<<"-"<<q<<"i";
    
}
// Write a C program that calculates the roots of a quadratic equation of the form ax^2 +
// bx + c = 0.
// The program should:
// a. Take the coefficients a, b, and c as inputs.
// b. Calculate the discriminant (D = b^2 - 4ac).
// c. Based on the value of the discriminant, determine the nature of the roots (real and
// distinct, real and equal, or complex).
// d. Output the roots accordingly.
// Example:
// Enter coefficients a, b, and c: 1 2 5
// Roots are complex and imaginary.
// Root 1 = -1.00 + 2.00i
// Root 2 = -1.00 - 2.00i