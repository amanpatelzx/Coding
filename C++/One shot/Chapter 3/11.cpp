#include<iostream>
using namespace std;
int main()
{
    int arry[]={12,23,34,545,64,7,4,23,6,5};
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