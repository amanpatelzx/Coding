#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,1,2,23,2,4,6,4,6};
    int s=0,ans=0;
    cout<<sizeof(arr)/4<<endl;
    for(int i=0;i<sizeof(arr)/4;i++){
    for(int j=0;j<sizeof(arr)/4;j++){
        if(j==i) continue;
        else if(arr[j]==arr[i]) s++;
    }
    if(s==0) ans=arr[i];
    s=0;
    }
    cout<<"Single element is "<<ans;
}