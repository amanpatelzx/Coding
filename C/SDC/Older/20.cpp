#include<iostream>
using namespace std;
int main(){
    int x,a=0,b=0;
    cout<<"Enter the no.--> ";
    cin>>x;
    while(x!=0){
        a=x%10;
        if(a>=b) b=a;
        x=x/10;
    }
    cout<<"The greatest digit is "<<b;
}