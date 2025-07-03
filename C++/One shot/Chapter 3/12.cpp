#include<iostream>
using namespace std;
int main()
{
    int arry[10];
    for(int j=0; j<10; j++){
        cin>>arry[j];
    }
    int t=arry[0];
    for(int i=0; i<10; i++)
    {
        if(t<arry[i])
        {
            t=arry[i];
         }
    
        
    }    
        
    cout<<t<<endl;
 }