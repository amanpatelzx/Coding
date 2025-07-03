#include<iostream>
using namespace std;
int main(){
    int x,a,b=0;
    cout<<"Enter the no.--> ";
    cin>>x;
    while(x!=0){
        a=x%10;
        b=b+a*a;
        x=x/10;
    }
    cout<<"The sum of square of digits is "<<b;
}