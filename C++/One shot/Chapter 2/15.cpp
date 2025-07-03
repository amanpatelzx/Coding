#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your marks :";
    cin>>x;
    if(x>81 and x<=100){
    cout<<"Very Good";
    }
     if(x>61 and x<=81){
    cout<<"Good";
    }
     if(x>41 and x<=61){
    cout<<"Average";
    }
     if(x>=0 and x<=41){
    cout<<"Fail";
    }


}