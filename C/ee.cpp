#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    int a=0;
    for(int i=2; i<=(n+1)/2; i++){
        if (n%i==0){
            a=1;
            break;
        } 
            
        
        
        

    }
    if (a==1) cout<<"Its Composite no.";
    else if(n==1) cout<< "nothing of them";
    else cout<<"Its Prime no. ";
}
    

    
 