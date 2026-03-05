#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 5, 6 ,7 ,10 ,15 ,234,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0;
    for(int i = n/2; i >= 1; i = i/2){
        if(i+k < n && arr[i+k] < arr[i+k+1]) k += i;
    }
    cout<<k+1<<"  "<<arr[k+1];
}//keep in mind this way of solving binary search;