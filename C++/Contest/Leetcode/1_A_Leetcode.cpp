    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<ll> vl;
    typedef pair<int,int> pi;
    typedef pair<ll,ll> pl;
    typedef __int128_t lll;
    #define UM unordered_map
    #define US unordered_set
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair
    #define For(i,a,b) for (int i = a; i <= b; i++)

    class Solution {
    public:
        int removeElement(vector<int>& v, int val) {
            int cnt = 0; For(i,0,(int)v.size()-1) if(v[i] != val) cnt++ return cnt; 
        }
    };
