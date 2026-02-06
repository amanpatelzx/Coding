class Solution {
public:
typedef pair<long long , char> P;
    vector<vector<long long>> dp;//without dp it was giving TLE;
    long long shortest_path(unordered_map<char,vector<pair<char , long long>>> &graph , char a , char b){
        if( dp[a-97][b-97] != -1) return  dp[a-97][b-97];
        priority_queue<P , vector<P> ,greater<P>> pq;
        vector<long long> ans(27 , LLONG_MAX);
        ans[a-97] = 0;
        pq.push({0 , a});
        while(!pq.empty()){
            long long distance = pq.top().first;
            char node = pq.top().second;
            pq.pop();
            if(node == b) return dp[a-97][b-97] = ans[b-97];
            if(distance  > ans[node-97]) continue;
            for( auto &neighbour : graph[node]){
                char v = neighbour.first;
                long long wt = neighbour.second;
                if(ans[node-97] + wt < ans[v-97]){
                    ans[v-97] = ans[node-97] + wt;
                    pq.push({ans[v-97] , v});
                }
            }
        }
        return dp[a-97][b-97] = ans[b-97];
    }
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        dp.resize(27 , vector<long long>(27 , -1));
        unordered_map<char , vector<pair<char , long long>>> graph;
        for(int i = 0; i < cost.size(); i++){
            char a = original[i];
            char b = changed[i];
            long long wt = cost[i];
            graph[a].push_back({b ,wt});
        }
        long long result = 0;
        for(int i = 0; i < source.size(); i++){
            if(source[i] != target[i]){
                long long temp = shortest_path(graph , source[i] , target[i]);
                if(temp == LLONG_MAX) return -1;
                else result += temp;
            }
        }
        return result;
    }
};