#include<iostream>
using namespace std;
int main(){
    int x,a=0,b=0,c,d;
    cout<<"Enter the no.--> ";
    cin>>x;
    int e=x;

    
    while(x!=0){
        c=x%10;
        a++;
        x=x/10;
    }
   int  arr[a];
   while(e!=0){
        d=e%10;
        e=e/10;
        b++;
        arr[b-1]=d;
    }
    for(int i=0;i<a;i++){
            int m=0;
        for(int j=0;j<a;j++){
            if(arr[i]==arr[j]){
                m=m+1;
            }
        }
            cout<<"The digit "<<arr[i]<<" : "<<m<<endl;
     }
}