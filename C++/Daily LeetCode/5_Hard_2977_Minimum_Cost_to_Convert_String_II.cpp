class Solution {
public:
    typedef long long ll;
    typedef pair<ll , string> P;
    ll INF = 1e10;
    unordered_map<string , vector<pair<string ,ll>>> adj;
    vector<ll> dp;
    string sourceStr;
    string targetStr;
    set<int> validLengths;
    unordered_map<string , unordered_map<string , ll>> dpOfGraph;
    ll shortest_path(string &start , string &end){
        if(dpOfGraph[start].count(end)){
            return dpOfGraph[start][end];
        }
        priority_queue<P , vector<P> , greater<P>> pq;
        unordered_map<string , ll> result;
        result[start] = 0;
        pq.push({0 , start});

        while(!pq.empty()){
            ll currCost = pq.top().first;
            string node = pq.top().second;
            pq.pop();
            
            if(node == end) break;
            for(auto &edge : adj[node]){
                string adjNode = edge.first;
                ll edgeCost = edge.second;
                if(!result.count(adjNode) || currCost + edgeCost < result[adjNode]){
                    result[adjNode] = currCost + edgeCost;
                    pq.push({currCost + edgeCost , adjNode}); 
                }
            }
        }
        ll finalCost = result.count(end) ? result[end] : INF;
        return dpOfGraph[start][end] = finalCost;
    }
    ll solve(int idx){
        if(dp[idx] != -1) return dp[idx];
        if(idx >= sourceStr.length()) return 0;
        ll minCost = INF;
        if(sourceStr[idx] == targetStr[idx]){
            minCost = solve(idx+1);
        }
        for(auto &len : validLengths){
            if(idx + len > sourceStr.length()) break;
            string srcSub = sourceStr.substr(idx, len);
            string tgtSub = targetStr.substr(idx, len);

            if(!adj.count(srcSub)) continue;

            ll minPathCost = shortest_path(srcSub , tgtSub);
            if(minPathCost == INF) continue;
            minCost = min(minCost , minPathCost + solve(idx + len));
        }
        return dp[idx] = minCost;
        
    }
    long long minimumCost(string source, string target, vector<string>& original, vector<string>& changed, vector<int>& cost) {
        sourceStr = source;
        targetStr = target;
        int n = target.size();
        dp.assign(n+2 , -1);

        for(int i = 0; i < original.size(); i++){
            adj[original[i]].push_back({changed[i] , cost[i]});
        }
        for( auto &s : original){
            validLengths.insert(s.size());
        }
        ll ans = solve(0);

        return ans == INF ? -1 : ans;
    }
};