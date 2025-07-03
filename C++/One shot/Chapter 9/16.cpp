#include<iostream>//this concept is pass by reference
using namespace std;
void swap(int* a,int* b){//
    int temp=*a;//nd b
    *a=*b;// undertand concept of pointer to swap digit
    *b=temp;

}
int main(){//
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b;


    }
 