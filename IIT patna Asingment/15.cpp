#include<iostream>
using namespace std;
int main(){
    float r1,r2,r3,y,n,m;
    char c;
    cout<<"Choose the Parallel or series by typing p or s --> ";
    cin>>c;
    cout<<"Enter the resistance as r1 ,r2 ,r3 \n";
    cin>>r1>>r2>>r3;
    m=r1+r2+r3;
    n=(r1*r2*r3)/(r1*r2+r2*r3+r3*r1);
    if(c=='p') cout<<"Your equivalent resistance is "<<n<<" ohm";
    if(c=='s') cout<<"Your equivalent resistance is "<<m<<" ohm";
    
//(Easy) Calculate the Resistance of a Circuit. Write a C program that calculates the
//total resistance of resistors connected in series and parallel. The program should:

    


}