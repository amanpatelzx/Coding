#include <bits/stdc++.h>
using namespace std;
    
int main(){
    unordered_map<int,int> mp;
    mp[1] = 4;
    for(auto ele : mp){
        cout<<ele.first;
        cout<<ele.second;
    }
}