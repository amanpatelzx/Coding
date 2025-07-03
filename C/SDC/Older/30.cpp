#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c=0;
    cout<<"Enter the no. : ";
    cin>>a;
    vector<int>v;
    while(a!=0){
        b=a%10;
        v.push_back(b);
        a=a/10;
    }
    for(int i=0;i<v.size();i++){
        c=c+v[i];
    }
    if(c%2==0) cout<<"Sum of digit is even number ";
    else cout<<"Sum of digit is odd number ";
}