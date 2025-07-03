#include<iostream>
using namespace std;
int main(){
    int x,y,y1,a1,a,b;
    cout<<"Enter the no. in second->\n";
    cin>>x;
    y=x/3600;
    y1=x%3600;
    a=y1/60;
    a1=x%60;
    cout<<y<<":"<<a<<":"<<a1;
}
