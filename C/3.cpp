#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int r=n%12;
       long long a=0;
       if(r==10){
        a=22;
       }else if(r==11){
        a=11;
        }else{
            a=r;
        }

        if(n<a){
            cout<<-1<<endl;
        }else{
            cout<<a<<" "<<n-a<<endl;
        }

    }
    return 0;
}