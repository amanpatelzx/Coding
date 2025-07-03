#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the side\n";
    cin>>a>>b>>c;
    if(a+b>c and b+c>a and c+a>b){
    if(a==b and b==c and c==a){
        cout<<"Its equilateral triangle";
    }
    else if((a==b and b!=c) or (c==a and c!=b) or (b==c and b!=a)){
        cout<<"Its isocelse triangle";
    }
    else cout<<"Its scalene triangle";
    }
    else cout<<"These side not form triangle";

}