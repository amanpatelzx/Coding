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

    if (x > y and y > z){ // Note!!! we can also use && at the place of and

        cout << x;
    }    
    if (x > z and z> y){ // Note!!! we can also use && at the place of and

        cout << x;
    }
     if (y>x and x>z){ // Note!!! we can also use && at the place of and

        cout << y;

    }
    if (y>z and z>x){ // Note!!! we can also use && at the place of and

        cout << y;
    }    
     if (z > y and y > x){ // Note!!! we can also use && at the place of and

        cout << z;
    }
    if (z > x and x> y){ // Note!!! we can also use && at the place of and

        cout << z;
    }
}