#include<iostream>
using namespace std;
int main(){
    int x,y,a=0;
    cout<<"Enter the two No. : ";
    cin>>x>>y;
    cout<<"Prime numbers are : ";
    for(int i=x+1;i<y;i++){
        for(int j=i/2;j>0;j--){
            if(i%j==0){  
            if(j==1){
                cout<<i<<"   ";
            } 
            break;
            }
        }
    }

} 