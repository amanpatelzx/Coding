#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no.";
    cin>>x;
    int a;
    int b=0;

    while(x!=0){
        a=x%10;
        if(a%2==0){
            b=b+a;
            

        }
        x=x/10;
    }
    cout<<b;


}
    
