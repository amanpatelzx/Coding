#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string s;
    int sum=0;
    cout<<"Enter the binary no. -> ";
    cin>>s;
    for(int i=0;i<s.size();i++){
        sum+=(char(s[s.size()-1-i])-48)*pow(2,i);
    }
    cout<<"Binary number "<<s<<" = "<<sum;
}