#include<iostream>
#include<vector>
using namespace std;
int x;
void rain(vector<int>&v){
    vector<int>v1(x);
    int max = v[0];
    for(int i=0;i<x;i++){
        if(max<v[i])max = v[i];
        v1[i]=max;
    }
    for(int i=0;i<x;i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    rain(v);
}