#include<iostream>
using namespace std;
void change(int x[]){
    x[0]=1;//is will not wonk in case of integer but
}           //work in case of array
int main(){
   int a[]={6,2,8,5,0}; 
    for(int i=0; i<=4; i++){
        
        cout<<a[i]<<" , ";
    }
    cout<<endl;
    change(a); 
    for(int i=0; i<=4; i++){
        
        cout<<a[i]<<" , ";
    }
}
