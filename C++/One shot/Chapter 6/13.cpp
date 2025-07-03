#include<iostream>
using namespace std;
void swap(int& a,int& b){//focus on int& funtion
    int temp=a;//its becouse to use the exact of down in a and b
    a=b;// undertand this concept
    b=temp;

}
int main(){//this method is pass by refrence
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;


    }
 