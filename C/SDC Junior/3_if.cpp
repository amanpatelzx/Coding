#include<iostream>
using namespace std;
int main(){
   //code here
    int a;
    cin>>a;

    if(a % 3 == 0 or a % 5 == 0){
        cout<<"Yes , its divible by 3 or 5\n";
    }
    if(a % 3 == 0 and a % 5 == 0){
        cout<<"Yes , its divible by 3 and 5\n";
    }
    if( a % 2 == 0 && a % 3 == 0){ // here && means and
        cout<<"Yes ,its multiple of 6 \n";
    }
    if( a % 2 == 0 || a % 3 == 0){ // here || means or
        cout<<"It's can be multiple of 6 \n";
    }
}
