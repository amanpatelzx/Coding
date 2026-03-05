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
        unordered_set<int> s;
        vector<vector<int>> arr;
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            vector<int>v(x);
            for(int i  =0; i <x; i++){
                cin>>v[i];
            }
            vector<int>temp;
            unordered_set<int> s1;
            for(int i = x-1; i>=0; i--){
                if(!s1.count(v[i])){
                    temp.push_back(v[i]);
                    s1.insert(v[i]);
                }
            }
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        pq.push({arr[0][0] , 0});
        for(int i =1; i< arr.size(); i++){
            if(pq.top().first < arr[i][0]){
                pq.push({arr[i][0], i});
            }
        }
        vector<bool> check(arr.size(), false);
        for(int i = 0; i < arr.size(); i++){
            if(arr[i][0] == pq.top().first) pq.pop();
            if(check[i]) continue;
            for(int j = 0; j < arr[i].size(); j++){
                if(arr[i][j] > pq.top().first){
                    int idx = pq.top().second;
                    pq.pop();
                    check[idx] = true;
                    for(int k = 0; k < idx; k++){
                        if(!s.count(arr[i][j])){
                            cout<<arr[i][j]<<" ";
                            s.insert(arr[i][j]);
                        }
                    }
                }
                else {
                    if(!s.count(arr[i][j])){
                        cout<<arr[i][j]<<" ";
                        s.insert(arr[i][j]);
                    }
                }
            }
        }
        cout<<"\n";
    }

}