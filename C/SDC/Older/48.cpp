#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. greater than 4-> : ";
    cin>>x;
    cout<<endl;
    for(int i=0;i<x;i++){
    for(int j=0;j<=x-1-i;j++){
        cout<<"  ";
    }
    cout<<" *";
    for(int j=1;j<=i;j++){
        if(i==(x/2) and j==i/2+1){
           if(x%2==0) cout<<" * ";
           if(x%2!=0) cout<<"*  ";
        }
        else cout<<"   ";
    }
    if(i!=0) cout<<"*";
    cout<<endl;
    cout<<endl;
    }

}