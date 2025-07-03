#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b=1,c=0;
    cout<<"Enter the no. : ";
    cin>>a;
    vector<int>v;
    while(a!=0){
        b=a%10;
        v.push_back(b);
        a=a/10;
    }
    for(int i=0;i<v.size();i++){
        b=b*v[i];
        c=c+v[i];
    }
    b=b/v[v.size()-1];
    if(b==c){cout<<" Yes it's a Spy Number : ";
    cout<<v[0];
    for(int i=1;i<v.size();i++){
        cout<<"+"<<v[i];
    }
    cout<<"=";
    cout<<v[0];
    for(int i=1;i<v.size();i++){
        cout<<"*"<<v[i];
    }
    cout<<"="<<c;
    }
    else cout<<"Its not a Spy Number as "<<c<<" not = "<<b;
}