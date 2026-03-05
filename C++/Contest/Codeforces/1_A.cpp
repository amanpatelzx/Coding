#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        vector<int> temp = v;
        sort(v.rbegin() ,v.rend());
        int val = INT_MIN;
        int idx = -1;
        for(int i = 0; i < v.size(); i++){
            if(v[i] != temp[i]){
                val = v[i];
                idx = i;
                break;
            }
        }
        int tempIdx;
        for(int i = 0; i < n; i++){
            if(temp[i] == val){
                tempIdx = i;
                break;
            }
        }
        if(idx != -1) reverse(temp.begin() + idx, temp.begin()+tempIdx+1);
        for(auto &ele : temp){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }

}