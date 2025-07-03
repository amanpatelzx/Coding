#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double p,r,t,a,b,i;
    cout<<"Enter principle amount, yealy rate,and time in year \n";
    cin>>p>>r>>t;
    a=p*pow((1+r/100),t);
    i=a-p;
    cout<<"Your interest is "<<i<<endl;
    cout<<"Your total amount is "<<a;
    //  for(int i=1;i<=t;i++){
    //     b=
        
     }




