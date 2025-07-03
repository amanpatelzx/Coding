#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;
    int b=1;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=(i);j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
     }
 }
