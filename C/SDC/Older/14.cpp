#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no.->";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=x-i;j>=1;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=1;l<=i-1;l++){
           cout<<i-l<<" ";
        }
        cout<<endl;
    }
    
}
