#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = "0";
        int cnt = 0;
        n--;
        bool check = true;
        for(int i = 0; i < n; i++){
            if(!check){
                ans += '0';
                cnt++;
                if(cnt == 2){
                    check = true;
                    cnt = 0;
                }
            }
            else{
                ans += '1';
                cnt++;
                if(cnt == 2){
                    check = false;
                    cnt = 0;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
