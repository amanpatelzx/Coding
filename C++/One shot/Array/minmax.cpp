#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int b,c;
    int mn =-000000001;
    int mx= 33344444;
    for(int j=0; j<5; j++){
        b=max(mn,a[j]);
        c=min(mx,a[j]);
    
    }
    cout<<"your max no. is "<<b<<endl;
    cout<<"your min no. is "<<c;

    }
