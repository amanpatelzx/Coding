#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    c=a;
    for(int i=sqrt(a);i<a;i++){
        if(i*i>a && i*i<b){
         cout<<i*i<<" ";
         if(i*i>b) break;
        }
    }
}