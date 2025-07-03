#include<iostream>
using namespace std;//to find the fibonaki no,
int fibo(int n){
    if(n=1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);//understand this concept very well
}
int main(){//if not getting the concept watch the video again
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<fibo(n);

}
