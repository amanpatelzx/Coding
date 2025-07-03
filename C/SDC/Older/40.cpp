#include<iostream>
using namespace std;
int main(){
    int x,a,b=0,c;
    cout<<"Enter the no.--> ";
    cin>>x;
    cout<<"The required result is : ";
    while(x/10!=0){
   while(x!=0){
        a=x%10;
        b=b+a;
        x=x/10;
        cout<<a;
        if(x!=0) cout<<"+";
    }
    cout<<"="<<b;
    if(b/10!=0) cout<<"=";
    x=b;
    b=0;
    }
}