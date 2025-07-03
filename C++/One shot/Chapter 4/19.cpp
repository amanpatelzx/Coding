#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;
    int x=n/2+1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==x || j==x) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;

    }    
    
    
       
       
        
    
}