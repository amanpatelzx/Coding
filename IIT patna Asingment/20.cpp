#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,m,n,o,x1,x2,x3,y1,y2,y3;
    cout<<"To check point form right angle triangle or not or not\n";
    cout<<"Enter the x1 and y1 as first coordinate \n";
    cin>>x1>>y1;
    cout<<"Enter the x2 and y2 as first coordinate \n";
    cin>>x2>>y2;
    cout<<"Enter the x3 and y3 as first coordinate \n";
    cin>>x3>>y3;

    m=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    n=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    o=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    a=sqrt(m);
    b=sqrt(n);
    c=sqrt(o);

    if(a*a+b*b=(c*c)){
     cout<<"Yes point "<<x1<<","<<y1<<" and "<<x2<<","<<y2<<" and "<<x3<<","<<y3<<" is form Right angle Triangle";
    }
    else cout<<"Not form right angle trianle";

   

    

}