class Solution {
public:
    typedef long long ll;
    int M = 1e9+7;
    ll dp[1005][1005][2];
    ll f(int &zero , int &one , int &limit, int z, int o, bool check){
        if(z > zero || o > one) return 0;
        if (z == zero) return (one - o <= limit && !check) ? 1 : 0;
        if (o == one) return (zero - z <= limit && check) ? 1 : 0;
        if(dp[z][o][check] != -1) return dp[z][o][check];
        ll result = 0;
        //result = (add - sub + M) % M; keep in mind this modular property
        if(check){
            int n = min(limit , zero - z);
            result = (f(zero , one , limit ,z+1 , o ,true)
                    + f(zero , one , limit, z+1, o, false)
                    - f(zero , one, limit, z+n+1 , o , false)
                    + M ) % M;
        }
        else{
            int n = min(limit , one - o);
            result = (f(zero , one , limit ,z , o+1 ,false) 
                    + f(zero , one , limit, z, o+1, true)
                    - f(zero , one, limit, z , o+n+1 , true)
                    + M ) % M;
        }
        result = result % M;
        return dp[z][o][check] = result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp , -1, sizeof(dp));
        ll a = f(zero , one , limit, 0 , 0 , true);
        ll b = f(zero , one , limit, 0 , 0 , false);
        return (a+b) % M;
    }
};