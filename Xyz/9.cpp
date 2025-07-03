#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,a,r;
    cout<<"Enter the Velocty and Angle";
    cin>>x>>a;
    float c=3.14*a/180;

    r=(x*x*sin(c)*sin(c))/(2*9.8);
    cout<<r;

    

    }

