#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%5==0 or x%3==0){ // Note!!! we can also use || at the place of and

    cout<<"Yes its a divisible by 5 or 3";
    }
    else {
        cout<<"No its not divisible by 5 or 3";
    }

}