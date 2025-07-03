#include<iostream>
using namespace std;
int main(){
    int x,a,b=0,c;
    cout<<"Enter the no.--> ";
    cin>>x;
    cout<<"The required result is : ";
    for(int i=0;i<4;i++){
   while(x!=0){
        a=x%10;
        b=b+a;
        x=x/10;
        cout<<a<<"+";
    }
    cout<<"="<<b<<"=";
    x=b;
    b=0;
    if(x/10==0){
        break;
    }
    }
    cout<<"="<<x;
}