#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"To check number is composite or Prime : ";
    cin>>n;
    bool flag=true;


    for(int i=2; i<n/2; i++){
        if(n%i==0){
            flag= false;
            break;
            

        }
        
    }
    if(n==1) cout<<"Never prime nor composite";
    else if(flag==true) cout<<"Prime number";
    else cout<<"Composite Number";
    
    
    }