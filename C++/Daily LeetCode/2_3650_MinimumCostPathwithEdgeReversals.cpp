class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        unordered_map<int , vector<pair<int,int>>> graph;
        for(auto &ele : edges){
            int a = ele[0];
            int b = ele[1];
            int weight = ele[2];
            graph[a].push_back({b , weight});
            graph[b].push_back({a , 2*weight});
        }
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
        vector<int> ans( n , INT_MAX);
        ans[0] = 0;
        pq.push({0 , 0});

        while(!pq.empty()){
            int distance = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(node == n-1) return ans[n-1];
            for(auto ele : graph[node]){
                int neighbour = ele.first;
                int d = ele.second;
                if( distance + d < ans[neighbour]){
                    ans[neighbour] = distance + d;
                    pq.push({distance + d , neighbour});
                } 
            }
        }
        return -1;
    }
};