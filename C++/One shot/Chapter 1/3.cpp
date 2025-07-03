#include<iostream>
using namespace std; // // this sign means just commentating it will not impact any coading things
int main(){
    int x = 10, y = 5;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    x = 20, y = 4;
    cout<<x+y<<endl;
    cout<<x*y<<endl; //here will get 80 as answer
    x = x-10, y = y+1;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    x +=10, y -=1; // we can also write in this form like x+=3 is same as x=x+3
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    x ++, y --; //// we can also write in this form like x++ means x=x+1 and y-- means y=y-1 
    cout<<x+y<<endl;
    cout<<x*y<<endl; 
}