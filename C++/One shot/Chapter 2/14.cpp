#include<iostream>
using namespace std;
int main(){
        int x;
    cout<<"Enter fist integer :";
    cin>>x;
    int y;
    cout<<"Enter second integer :";
    cin>>y;
    int z;
    cout<<"Enter third integer :";
    cin>>z;

    if (x > y and x > z){ 
        cout<<x;

    }
    else if(y>x and y>z){
        cout<<y;
    }
    else {
        cout<<z;
    }
}    