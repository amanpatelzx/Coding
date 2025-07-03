#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Lenght of Reatangle :";
    cin>>x;
    cout<<endl;
    int y;
    cout<<"Enter Bredth of Reatangle :";
    cin>>y;
    cout<<endl;
    int a=x*y;
    int b = 2*(x+y);


    if(a>b){
        cout<<"Area is greter than perimeter by :";
        cout<<endl;

        cout<<a-b<<" Unit ";

    }
    else if(a<b){ // i can also do like this , learn this
        cout<<"Area is less than perimeter by : ";
        cout<<b-a<<" Unit ";
     

    }
    else {
        cout<<"Area is eqaul to perimeter ";
    }

}