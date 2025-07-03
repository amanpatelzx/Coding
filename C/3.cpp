#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 1st no. ";
    cin>>x;
//     int a;
//     int b=x;
//     cout<<"Digits are - ";
//     for (int i=1;i<=x; i++){
//         if (a=b%10) cout<<a<<",";
//         b=b/10;
    
//     }
    
// }
// int c=0;
// int d;
// for(int i=1;i<=x;i++){
//     if(i%7==0) i=d;
//     c=c+d;


// }
// cout<<c;
// }
// int b=x/7;
// int c=0;
// for (int i = 0; i <=b ; i++)
// {
//     c=c+7*i;
// }
// cout<<c;
// }
int b=x/7;
int c=0;
for (int i = 0; i <=b ; i++)
{
    c=c+7*i;
}
cout<<c;
}
