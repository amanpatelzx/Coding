#include<iostream>
#include<cmath>
int main(){
   double a,b;
   std:: cout<<"Enter any no to get is squareroot ";
   std:: cin>>a;
   
   if(a<0) a=-a;
   b=sqrt(a);
   std::cout<<b<<"i";
}