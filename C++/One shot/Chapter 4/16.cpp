#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){ cout<<"0";
        for(int j=1;j<=i;j++){
            if(j==1) continue;
            
            else if(j%2!=0) cout<<"0";
            else cout<<"1";
            
        } 
        }
        else {cout<<"1";
        for(int j=1;j<=i;j++){
            if(j==1) continue;
            
            else if(j%2!=0) cout<<"1";
            else cout<<"0";
            
        } 
        
    
       
            
        }    
        

        
        cout<<endl;
        
       
        
    }
}





 