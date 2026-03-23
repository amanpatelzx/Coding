#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    //2nd method -> without taking extra variable
    cout<<"Before swap -> "<<a<<" "<<b<<"\n";
    a = a + b;
    b = a - b;
    a = a - b;  //basic math math concept
    cout<<"After swap -> "<<a<<" "<<b;
}
