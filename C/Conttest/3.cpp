#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for( int i = 0 ; i < t ; i++){
        int ans=0;
        int idx = 0;
        int pos = 0;
        int m,n;
        cin>>n>>m;
        for(int j=0;j<n;j++){
            int a,b;
            cin>>a>>b;

            if(a<=m){
                if((a-pos)%2 == 0 ){
                    if(idx == b) ans += (a-pos);
                    if(idx != b) ans += (a - pos - 1);
                }
                else {
                    if(idx == b) ans += (a-pos-1);
                    if(idx != b) ans += (a - pos);
                }
            }
            pos = a;
            idx = b;
        }
        if(m - pos != 0 ) ans += (m-pos);
        arr[i] = ans;
    }
    for(int i = 0 ;i < arr.size(); i++){
        cout<<arr[i]<<"\n";
    }
}