#include<iostream>
using namespace std;
int main(){
    int x,a=0,b=0;
    cout<<"Enter the no.--> ";
    cin>>x;
    for(int i=1;i<=x/2;i++){
        if(x%i==0){
         b=i;
        // else b=0;
        a=a+b;
    }
        // cout<<"b="<<b<<" a="<<a<<",";
        }
        // cout<<endl;
        if(a==x) cout<<"Yes "<<x<<" is a number perfect number";
        else cout<<"No "<<x<<" is not a number perfect number";
}