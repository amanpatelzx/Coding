#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the no. : ";
    cin>>x;

    int temp=x;
    temp!=0;

    for(int i=1; i<=x;i++){
        temp/=10; 
    }

    cout<< "Number of digits: "<<i<<endl;
    return 0;
}
