#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no." ;
    cin>>x;
    int a;
    int b=10;
    int c=0;
    
    for (int i=1;i<=x;i++){
        a=(x/10)%b;
        b=b*10;
        c=c+a;
        
    }
    
    cout<<"Sum is even digit is "<<c;
    cout<<"Hi";


}