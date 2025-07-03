#include<iostream>//this concept is pass by reference
using namespace std;
void swap(int* m,int*n){//
    int temp=*m;//nd b
    *m=*n;// undertand concept of pointer to swap digit
    *n=temp;
    cout<<*m<<" "<<*n;
    return;

}
int main(){//
    int a,b;
    cin>>a;
    cin>>b;
    swap(&a,&b);
    

    }
 