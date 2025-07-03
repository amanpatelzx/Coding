#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"Enter the no.s->\n";
    cin>>x>>y;
    for(int i=(x+y)/2;i>0;i--){
        if(x%i==0 && y%i==0){
            a=i;
            break;
        }
    }
    cout<<"The Higest common diviser is "<<a;
    
}
