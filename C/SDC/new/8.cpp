#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev1 = 1;
    int prev2 = 0;
    cout<<prev1<<" ";
    for(int i = 1; i < n; i++){
        int curr = prev1 + prev2;
        cout<<curr<<" ";
        prev2 = prev1;
        prev1 = curr;
    }
}
