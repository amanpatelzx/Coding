#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < 2*n; j++){
            if(i == n-1 && j < 2*n-1) cout<<"* ";
            else if(i == 0 && j == n-1) cout<<"* ";
            else if(i > 0 && (j == n-1-i || j == n+i-1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}