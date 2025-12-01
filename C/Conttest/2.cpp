#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    int t;
    cin>>t;
    for( int i =0; i<t; i++){
        int p;
        int count = 0;
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        for (int j=0; j <n;j++) {
            int p;
            cin >> p;
            count++;
        }
        for (int k=0; k <m;k++) {
            int p;
            cin >> p;
            count++;
        }
        int q;
        ans.push_back(count);
    }
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}