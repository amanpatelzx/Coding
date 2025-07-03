#include<iostream>
using namespace std;
void print(int n, int x){
    if (n>x) return;
    cout<<n<<" , ";
    print(n+1, x);
}
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    print(1,x); 
 
}
