#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter the number of rows: ";
    cin >>x;
    int a=1;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= x; ++j) {
            if(j<=x-i+1) cout<<"  ";
            else cout<<" *";
        }
        cout << endl;
    }

    return 0;
}

