#include<iostream>
using namespace std;
int main(){
    // cout<<"Hi Guys";
    // int x;
    // cin>>x;
    // for(int i=0; i<x; i++){
    //     cout<<i<<" ";
    // }
    // for(int i = 0; i < 199; i++){
    //     cout<<"Hi Aman ";
    // }
    //lets tell what i want to do here
    // i want to write a code of binary search
    int arr[] = {2,3,4,5,5,6,7,7,8,9};
    int low = 0, high = sizeof(arr)/4;
    int target = 4;
    while( low <= high){
        int mid = low + (high - low );
        if(mid == target ){
            cout<<" Target found ";
            break;
        }
        else if ( mid < target ){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(low > high ) cout<<" Target not found ";
}

