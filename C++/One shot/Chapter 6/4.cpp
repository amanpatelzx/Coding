#include<iostream>
using namespace std;//sum of first n number
int sum(int n){
    if(n==1) return 1;
    return n + sum(n-1);//understand this concept very well
}
int main(){//if not getting the concept watch the video again
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<sum(n);

    }
