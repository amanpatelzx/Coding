#include<iostream>
using namespace std;
int main(){
    int x,y,a,b,c;
    cout<<"Enter the no.--> ";
    cin>>x>>y;
    a=min(x,y);
    for(int i=a;i>0;i--){
      if(x%i==0 and y%i==0){
        b=i;
        break;
      }
}
c=(x*y)/b;
cout<<"LCM of "<<x<<" "<<y<<" is : "<<c<<endl;
cout<<"HCF of "<<x<<" "<<y<<" is : "<<b;
}