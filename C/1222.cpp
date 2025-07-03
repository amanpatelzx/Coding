#include<iostream>
using namespace std;
int main(){
       int x,y;
    cout<<"Enter the no. rows  \n";
    cin>>y;
    x=y+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-2;k++){
            cout<<" *";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*x-2*i-1;k++){
            cout<<" *";
        }
        
        
        cout<<endl;
    }
}