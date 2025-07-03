#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price :";
    cin>>cp;
    cout<<endl;
    int sp;
    cout<<"Enter Selling price :";
    cin>>sp;
    cout<<endl;


    if(sp>cp){
        cout<<"Congratuation you are in Profit"<<endl;
        cout<<"Your Profit is : ";
        cout<<sp-cp<<endl;
        cout<<"Your Profit percentage is : ";
        cout<<(sp-cp)*100/cp;

    }
    else if(sp<cp){ // i can also do like this , learn this
        cout<<"Loss is "<<cp-sp;
     

    }
    else {
        cout<<"No profot no loss";
    }

}