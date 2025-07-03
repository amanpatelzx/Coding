#include<iostream>
using namespace std;
int main(){
    int x,a,b=1,c=0,d;
    cout<<"Enter the no.--> ";
    cin>>x; 
    d=x;                
    while(x!=0){
        a=x%10;
        for(int i=1;i<=a;i++){
            b=b*i;
        }
        c=c+b;
        b=1;
        x=x/10;
    }
    if(c==d)cout<<"Yes, the number "<<d<<" is a strong number ";
    else cout<<"No its not strong number";
}