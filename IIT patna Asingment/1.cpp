#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Welcome to Vending Machine...\nEnter the card with money ammout...\n-->";
    cin>>x;

    cout<<"The products are: \n1. Coke (Rs 50)\n2. Chips (Rs 30)\n3. Chocolate (Rs 20)\n";
    cout<<"Choose the product by Entering the no. 1 or 2 or 3\n -->" ;
    cin>>y;
    cout<<"How many pieces you want...\n-->";
    cin>>z;
    int a,b,c,m,n,o;
    if (y==1) m=50;
    a=m*z;
    if (y==2) n=30;
    b=n*z;
    if (y==3) o=20;
    c=o*z;

    if( (y==1) && (x>=a)) cout<<"Thanks for buying "<<z<<" Coke...\nYour money is left "<<x-a;
    else if ((y==2) and (a>=b)) cout<<"Thanks for buying "<<z<<" Chips...\nYour money is left "<<x-b;
    else if((y==3) and (x>=c)) cout<<"Thanks for buying "<<z<<" Chocolate...\nYour money is left "<<x-c;
    else cout<<"Chal nikal lawde , aukat dekhi hai khud ki";




    



}    