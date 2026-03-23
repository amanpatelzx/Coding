#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 9;
    for(int i = 0; i < n; i++){
        int temp = 2*i;
        if(i > n/2) temp = 2*(n-1-i);
        for(int j = 0; j < n; j++){
            if(i < n/2){
                if(j >= (n/2 - i)){
                    if(temp >= 0) cout<<"* ";
                    temp--;
                }
                else cout<<"  ";
            }
            else {
                // if(n % 2 == 0) cout<<" ";
                if(j > (i - n/2)){
                    if(temp >= 0) cout<<"* ";
                    temp--;
                }
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}