#include<iostream>
using namespace std;//to find the power of something.
int pow(int n, int m){
    if(m==0) return 1;
    return n * pow(n,m-1);//understand this concept very well
}
int main(){//if not getting the concept watch the video again
    int  n , m;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Power : ";
    cin>>m;

    cout<<pow(n,m);

    }
