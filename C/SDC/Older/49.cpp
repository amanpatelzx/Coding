#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. greater than 4-> : ";
    cin>>x;
    cout<<endl;
    for(int j=0;j<=x-1;j++){
        cout<<" ";
    }
    cout<<"  *"<<endl;
    for(int i=0;i<x+1;i++){
    for(int j=0;j<=x-1-i;j++){
        cout<<" ";
    }
    cout<<" *";
    
    for(int j=1;j<=i;j++){
       if(i!=x/2) cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        if(i==x/2) cout<<" *";
    }
    cout<<" *";
    cout<<endl;
    }
}