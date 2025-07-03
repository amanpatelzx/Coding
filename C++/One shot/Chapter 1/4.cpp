#include<iostream>
using namespace std; // // this sign means just commentating it will not impact any coading things
int main(){
    float x = 10, y = 3; // we use float at place of int for desicmal places solution
    cout<<++x<<endl; //see here it get increase from 10 to 11 by using ++
    cout<<x<<endl;
    cout<<x++<<endl; //look the difference
    cout<<x<<endl;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    x = 20, y = 4;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl; 
    x = x-7, y = y+1;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    x +=10, y -=1; // we can also write in this form like x+=3 is same as x=x+3
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;

    }