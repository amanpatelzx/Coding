#include<iostream>
using namespace std;
int main(){
    // Find the sum of digits of a given no.

    int n;
    cin>>n;
    int limit = n;
    int sum = 0;
    for(int i = 1; i <= limit; i++){
        int rem = n % 10;
        sum += rem;
        n /= 10;
        if(n <= 0) break;
    }
    cout<<sum;
}