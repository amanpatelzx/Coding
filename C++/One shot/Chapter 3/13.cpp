#include<iostream>
using namespace std;
int main()
{
    int arry[10];
    for(int j=0; j<10; j++)
        cin>>arry[j];
    
    int t=arry[0] , t1;
  for(int k=0; k<10; k++)
  {
    for(int i=1; i<=10; i++)
    {
        if(arry[k]<arry[i] )
        {
            t=arry[k];
            arry[k]=arry[i];
            arry[i]=t;
        }
    }
  }
    for(int c=0; c<10; c++) 
     cout<<arry[c]<<endl;   
    
 }