#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cout<<"Enter the no. : ";
    cin>>a;
    for(int i=a/2;i>0;i--){
        if(a%i==0 and i*i==a){
        cout<<"Its a Perfect Square of "<<i;
        c++;
        }
    }
    if(c==0)  cout<<"Its a not Perfect Square";
}

   