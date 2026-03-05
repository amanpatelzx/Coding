#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 5, 6 ,7 ,8 ,23 ,54 ,564};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0;
    int target = 9;
    for(int i = n/2; i >= 1; i = i/2){
        if(i+k < n && arr[i+k] <= target) k += i;
    }
    cout<<k;
}