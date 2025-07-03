#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    int b=n;//juktiriuj
    int c=1;
   
    for (int i=1;i<=2*n+1;i++){
    if (i<=(n+1)) cout<<i;
    else if (i>(n+1)) cout<<((2*n+2)-i);
    }
    cout<<endl;
    
    
    

    for(int i=1;i<=n;i++){
    
        for(int j=1;j<=b;j++){
             cout<<j;
             
        }
        for(int k=1; k<=c; k++){
            cout<<" ";
        }
    
        for(int l=1; l<=b; l++){
            cout<<(b-l+1);
        }
        b--;
        c+=2;
        cout<<endl;
        
       
        
    }


        
    }

 