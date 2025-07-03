#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n  : ";
    cin>>n;
    for(int m=0; m<=n; m++){
    for(int r=0; r<=m; r++){
    int a=fact(m);
    int b=fact(r);
    int c=fact(m-r);
    int d=a/(b*c);
    cout<<d<<" ";
    }
    cout<<endl;
    }//pascal triangle

}