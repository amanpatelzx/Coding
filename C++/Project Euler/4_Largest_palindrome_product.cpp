#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
bool is_palindrome(int n){
    string s = to_string(n);
    int i = 0, j = s.size()-1;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}
void solve(){
    int result = 1;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            int temp = i*j;

            if(is_palindrome(temp)){
                dp.push_back(temp);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    solve();
    sort(dp.begin(), dp.end());
    while(t--){
        int n;
        cin>>n;
        auto it = lower_bound(dp.begin(), dp.end(), n);
        if(it == dp.begin()){
            cout<<-1<<"\n";
        }
        else{
            it--;
            cout<<*it<<"\n";
        }
    }
}
//this is like a queries problem...
//do use this method , becoause if you once calculated the result,
//there might be need for next testcase , in leetcode
//may be this will not work, but in codeforce of other input output 
// plateform this may very likely to happen