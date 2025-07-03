#include<iostream>
using namespace std;//Concept of Pointer...
int main(){
    // int x=3;
    int x=3*2;
    int *p=&x;//this pointer to store location of any things
    cout<<&x<<endl;//you can we get same answer here
    cout<<p<<endl;//this will print addess of variable x,
    cout<<x<<endl;//this is original value
    cout<<*p<<endl;//we can access the location p value like this
    cout<<&p<<endl;//adress of p which is different from x address

    }
