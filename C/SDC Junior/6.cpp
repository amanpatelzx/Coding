#include<iostream>
using namespace std;
int main(){
    // Find the sum of digits of a given no.

    int n;
    cin>>n;
    int sum = 0;
   while(n > 0){
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout<<sum;
}