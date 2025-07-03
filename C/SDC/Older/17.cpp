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
        for(int k=1;k<=2*i-1;k++){
            if(k<=i) cout<<k<<" ";
            else cout<<2*i-k<<" ";
        }
        cout<<endl;
    }
    
}
