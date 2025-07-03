#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c=0;
    cout<<"Enter the no. : ";
    cin>>a;
    vector<int>v;
    for(int i=a/2;i>0;i--){
        if(a%i==0){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        if((v[i]*v[i])==a){
         cout<<"Its a Perfect Square of "<<v[i];
         c++;
        }
    }
      if
      (c==0)  cout<<"Its a not Perfect Square";
}

   