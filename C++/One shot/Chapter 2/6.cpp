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
        cout<<"Congratuation you are in Profit";

    }
    if(sp<cp){
        cout<<"Loss";
    

    }
    if(sp==cp){
        cout<<"No profot no loss";
    }

}