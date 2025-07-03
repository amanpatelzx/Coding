#include<iostream>
using namespace std;
int main(){
    float a,b,x,y,n,m;
    cout<<"Real and imaginary part of 1st complex no.\n";
    cin>>a>>b;
    cout<<"Real and imaginary part of 2snd complex no.\n";
    cin>>x>>y;
    n=a*x-b*y;
    m=a*y+x*b;
    if (m<0){
    m=-m;
    cout<<"Result is "<<n<<" "<<"-"<<" "<<m<<"i";
    }
    else if (m==0){
    cout<<"Result is "<<n;
    }
    else{
    cout<<"Result is "<<n<<" "<<"-"<<" "<<m<<"i";
    }

}
// (Easy) Write a C program that multiplies two complex numbers of the form a + bi. The
// program should