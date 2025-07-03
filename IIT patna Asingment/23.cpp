#include<iostream>
using namespace std;
int main(){
    int x=1000;
    int a,b,c;
    cout<<"Welcome to ATM machine\n>Enter the (d) for deposite,\n>Enter (w) for withdraw, \n>Enter (c) for check the balance, \nEnter (e) for exit-->\n";
    char m;
     cin>>m;
    while (m!='e')
    {
        
       
        if (m=='d')
        
        {  cout<<"Enter amount Rupees \n";
            cin>>a;
            x=x+a;
          cout<<"Your money after deposite is Rupees "<<x<<"\n";
        }
        if(m=='w')
        {   cout<<"Enter amount Rupees \n";
            cin>>b;
            x=x-b;
            if(x<0){
                cout<<"Insufficent amount";
            }
            else cout<<"Your money left after withdraw Rupees "<<x<<"\n";
              
            }
        if (m=='c')
        {
            cout<<"Your money is left Rupees "<<x<<"\n";
        }

        
        
       cin>>m;
    }



}



