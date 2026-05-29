//https://codeforces.com/problemset/problem/459/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0;i < n; i++) cin>>v[i];
    unordered_map<ll,ll> mp;
    ll maxi = 0, mini = INT_MAX;
    for(int i = 0; i < n; i++){
        maxi = max(maxi , v[i]);
        mini = min(mini , v[i]);
        mp[v[i]]++;
    }
    cout<<maxi-mini<<" ";
    ll res = mp[maxi]*mp[mini];
    if(maxi == mini ) res = (mp[maxi])*(mp[maxi]-1)/2;
    cout<<res<<"\n";
}