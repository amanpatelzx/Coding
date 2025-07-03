#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans(vector<int>&v){
    for(int i=0;i<v.size();i++){
        if(v[i]!=i) return i;
    }
    int c=v.size();
    return c;
}
int main(){
    int x;
    cout<<"Enter no of element -> ";
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"Missing no is -> "<<ans(v);
}