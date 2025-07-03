#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. -> : ";
    cin>>x;
    for(int i=1;i<=x;i++){
    for(int j=1;j<=x-1;j++){
        if(j==1 or i==1 or i==((x)/2+1)){
        if(j!=x-1) cout<<" *";
        }
        else if(i<=x/2 and j==x-1)  cout<<" *";
        else cout<<"  ";
    }
    cout<<endl;
    }

    
    
    
}