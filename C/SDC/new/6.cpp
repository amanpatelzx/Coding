#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == (n+1)/2) {
                if((n % 2 == 0) && j == n) break;
                cout << " *";
            } 
            else if(i < (n+1)/2) {
                if(j == (n+1)/2 - (i-1) || j == (n+1)/2 + (i-1)) cout << " *";
                else cout << "  ";
            }
            else {
                a = 1;
                break;
            }
        }
        if(a) break;
        cout << endl;
    }
}