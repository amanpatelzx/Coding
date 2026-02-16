#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool last = false;
        for(int j = 0 ; j < n; j++){
            int temp;
            cin>>temp;
            if(temp == 67) last = true;
        }
        if(last) cout<<"YES\n";
        else cout<<"NO\n";
    }
}