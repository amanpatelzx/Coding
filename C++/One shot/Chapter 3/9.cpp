#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"To check number is composite or Prime : ";
    cin>>n;


    for(int i=2; i<n/2; i++){
        if(n%i==0){
            cout<<"Yes this no. is composite";
            break;
            

        }
        else{
            cout<<"Its Prime no.";
            break;
        }
        
    }
    
    
    }