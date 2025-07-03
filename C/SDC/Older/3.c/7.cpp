#include<iostream>
using namespace std;
int main(){
    int r,a;
    cout<<"Enter the radius of circle greater than 4\n";
    cin>>r;
    a=(r+2)/3;
    for(int i=1;i<=2*r;i++){
        for(int j=1;j<=2*r;j++){
            if((i==1 and j==r) or(i==2*r and j==r)){
                cout<<" *";
            }
            if((i==r and j==1) or(i==r and j==2*r)){
                cout<<"*";
            }
            if((i==a and j==a) or(i==a and j==2*r-a)){
                cout<<"*";
            }
            if((i==2*r-a and j==a) or(i==2*r-a and j==2*r-a)){
                cout<<" *";
            }
            else cout<<"  ";

        }
        cout<<endl;
    }

}