#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    cout<<"Enter the no. : ";
    cin>>x;
    
    for (int i=2;i<=x;i=i+2){
        cout<<x%pow(10,i);
    }

    
}
