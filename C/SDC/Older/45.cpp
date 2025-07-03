#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=100;i++){
        if(i%5==0 or i%7==0) continue;
        else cout<<i<<" , ";
    }
}