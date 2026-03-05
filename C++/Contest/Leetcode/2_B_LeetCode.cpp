#include <bits/stdc++.h>
using namespace std;
string f(string &s, int k){
        int i = 0;
        while(i < s.size()){
            bool check = false;
            for(int j = i+1; j < s.size() &&  j <= i+k; j++){
                if(s[i] == s[j]){
                    s.erase(j, 1);
                    check = true;
                    return s;
                }
            }
            if(!check) i++;
        }
        return s;
    }
    string mergeCharacters(string s, int k) {
        int temp = -1;
        while(temp != s.size()){
            temp = s.size();
            s = f(s , k);
        }
        return s;
    }
int main() {
    string s = "oqommmropo";
    int k = 4;
    cout<<mergeCharacters(s , k);
}