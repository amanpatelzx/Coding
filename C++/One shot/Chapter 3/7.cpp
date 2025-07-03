#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first term of GP : ";
    cin>>a;
    int r;
    cout<<"Enter the common Ratio : ";
    cin>>r;

    int n;
    cout<<"Number of terms you want to print : ";
    cin>>n;
    int x=a;

    

    for(int i=1; i<=n; i++){
        cout<<x<<" ";
        x=x*r;
        
    }
    
}