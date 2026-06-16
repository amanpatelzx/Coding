#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3] = {123454325,24424242,3};
    int n = 3;  

    for(int mask = 0; mask < (1 << n); mask++){
        cout<<mask<<" : ";
        for(int i = 0; i < n; i++){
            if((mask >> i) & 1){
                cout<<arr[i]<<" , ";a
            }
        } 
        cout<<"\n";
    }
}
