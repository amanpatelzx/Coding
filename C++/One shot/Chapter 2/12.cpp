#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter fist side :";
    cin>>x;
    int y;
    cout<<"Enter second side :";
    cin>>y;
    int z;
    cout<<"Enter third side :";
    cin>>z;

    if(x+y>z and y+z>x and z+x>y){ // Note!!! we can also use && at the place of and

    cout<<"Yes its sides of triangle";
    }
    else {
        cout<<"No its not not side of triangle";
    }

}