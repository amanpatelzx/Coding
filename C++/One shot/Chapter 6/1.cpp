#include<iostream>
using namespace std;
void print(int n){
    if (n==0) return;
    cout<<n<<" , ";
    print(n-1);
}
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    print(x);

    }
