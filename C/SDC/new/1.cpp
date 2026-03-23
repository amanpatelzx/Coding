#include<iostream>
using namespace std;
int main(){
    int n = 11;
    int m = 11;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( i == 0 || j == 0 || i == n-1 || j == m-1 || i==j || n-1-i == j || j == (m-1)/2 || i == (n-1)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}