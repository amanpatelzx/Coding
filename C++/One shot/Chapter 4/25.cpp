#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter the number of rows: ";
    cin >>x;
    int a=1;
    for (int i = 1; i <= x; ++i) {
         for (int j = 1; j <= x-i+1; ++j){
            cout<<"  ";
         }
        for (int j = 1; j <= x; ++j) { 
            cout<<" *";
        }
        cout << endl;
    }

    return 0;
}



