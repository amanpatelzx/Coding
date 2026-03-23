#include<iostream>
using namespace std;
int main(){
    //find the sum of positive no. given by user, we don't know many input he will give;

    int sum = 0;
    bool check = true;
    cout<<"Enter the value, for break type -1 : \n";
    while(check == true){
        int n;
        cin>>n;
        if(n == -1) break;
        sum = sum + n;
    }
    cout<<"Your sum is -> "<<sum;
}