#include<iostream>
using namespace std;
int main(){
       int x,y;
    cout<<"Enter the no. rows  \n";
    cin>>x;
    for(int i=1;i<=2*x;i++){
        if(i<=x){
        for(int j=1;j<=x-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" *";
        }
        }
        if(i>x){
        for(int j=1;j<=i-x;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*(2*x-i)-1;k++){
            cout<<" *";
        }
        }
        
        
        cout<<endl;
    }
}