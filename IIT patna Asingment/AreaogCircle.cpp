#include<iostream>
using namespace std;
int z(int y){
    int a=1;
    for(int i=1;i<=y;i++){
      a=a*i;
    }
    return a;
}
int main(){
    int n,r,o,m,y,d,e,f;
    char b;
    cout<<"Enter n\n";
    cin>>n;
    cout<<"Enter p for Permutaion, c for Combination\n";
    cin>>b;
    cout<<"Enter r\n";
    cin>>r;

    d=z(n);
    e=z(n-r);
    f=z(r);

    o=d/e;
    m=d/(e*f);
    
    if(b=='p') cout<<"The permutaion is --> "<<o;
    else if(b=='c') cout<<"The combination is --> "<<m<<endl;
    // else cout <<"Invalid input";  
    else if(b!='p' || b!='c') {
        cout<<"Invalid input";
    }


}