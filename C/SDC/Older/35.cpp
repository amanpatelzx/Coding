#include<iostream>
using namespace std;
int main(){
    int a,b=1,c=0;
    cout<<"Enter the no. : ";
    cin>>a;
    while(a!=0){
        b=b*a%10;
        c=c+a%10;
        a=a/10;
    }
    if(b==c) cout<<"Its a spy no. ";
    else cout<<"Its not a spy no. ";
    
}