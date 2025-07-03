#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%5==0 and x%3==0){ // Note!!! we can also use && at the place of and

    cout<<"Yes its a divisible by 5 and 3";
    }
    else {
        cout<<"No its not divisible by 5 and 3";
    }

}