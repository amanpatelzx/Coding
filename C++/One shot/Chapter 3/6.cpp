#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first term of AP : ";
    cin>>a;
    int d;
    cout<<"Enter the common difference : ";
    cin>>d;

    int n;
    cout<<"Till how for you want AP : ";
    cin>>n;
    int t=((n-a)/d+1);
    cout<<"Number of term is : ";
        cout<<t<<endl;
        cout<<"Sum of AP : ";
        cout<<t*(a+n)/2<<endl;

    

    for(int i=a; i<=n; i=i+d){
        cout<<i<<" ";
        
    }
    
    }