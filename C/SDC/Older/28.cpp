#include<iostream>
using namespace std;
int main(){
    int x,a,b=0;
    cout<<"Enteer the no.--> ";
    cin>>x;
    for(int i=x;i>1;i--){
        for(int j=i/2;j>0;j--){
            if(i%j==0){
                a=j;
                break;
            }
        }
        if(a==1){
            b++;
        }

    }
    int arr[b];
    int c=0;
    

     for(int i=x;i>1;i--){
        for(int j=i/2;j>0;j--){
            if(i%j==0){
                a=j;
                break;
            }
        }
        if(a==1){
         arr[c]=i;
         c++;
    }
}

     cout<<endl;
     int d;
    for(int i=0;i<b;i++){
        for(int j=i;j<b;j++){
            if((arr[i]+arr[j])==x){
                cout<<"Required answer is "<<arr[i]<<"+"<<arr[j]<<"="<<x<<endl;
                d=1;
                break;
            }
     }
        if(d==1){
          break;
        }
    }

}