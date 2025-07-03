#include<iostream>
using namespace std;
void print(int n){
    if (n==0) return;//base call
    print(n-1);// work
    cout<<n<<" , ";// call
}
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    print(x);

    }
