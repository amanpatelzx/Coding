#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long a;
    cout<<"Enter the no.for cube\n";
    cin>>a;
    for(double i=1;i<=a;i++){
        cout<<pow(2,i)<<",";
    }
}