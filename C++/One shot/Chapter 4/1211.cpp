#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the number of rows: ";
    cin>>a;
    for (int i=1; i<=2*a-1;i++) {
        for (int j=1;j<=2*a-1;j++) {
            if (i==1 || i==2*a-1 || j==1 || j==2*a-1) {
                cout<<a<<" ";
            } 
            else if(i==2 || i==2*a-2 || j==2 || j==2*a-2){
                cout<<a-1<<" ";
            }
            else if(i==3 || i==2*a-3 || j==3 || j==2*a-3){
                cout<<a-2<<" ";}
            else if(i==4 || i==2*a-4 || j==4 || j==2*a-4){
                cout<<a-3<<" ";
            }
            else if(i==5 || i==2*a-5 || j==5 || j==2*a-5){
                cout<<a-4<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}

