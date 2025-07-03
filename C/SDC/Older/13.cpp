#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no.->";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}
