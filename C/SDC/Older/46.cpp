#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. -> : ";
    cin>>x;
    for(int i=1;i<=x;i++){
    for(int j=1;j<=x-1;j++){
        if((i+j)==(j+1)) cout<<" *";
        else if((i+j)==i+1 and i!=1) cout<<" *";
        else if(j==(x-1) and i!=1) cout<<" *";
        else if(i==((x+1)/2) and j!=x-1) cout<<" *";
        else cout<<"  ";
    }
    cout<<endl;
    }

    
    
    
}