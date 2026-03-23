// https://codeforces.com/problemset/problem/2193/F
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    if (!(cin >> t)) return 0;
    
    while(t--){
        ll n, Ax, Ay, Bx, By; 
        cin >> n >> Ax >> Ay >> Bx >> By;
        
        // Use long long to prevent overflow during distance calculations
        vector<vector<ll>> nums(n , vector<ll>(2));

        for(int i = 0; i < n; i++) cin >> nums[i][0];
        for(int i = 0; i < n; i++) cin >> nums[i][1];

        // Sort by X-coordinate
        sort(nums.begin(), nums.end());
        
        vector<vector<ll>> arr;
        
        // Group Y-coordinates by their X-coordinate
        for(int i = 0; i < n; i++){
            ll first = nums[i][1];
            ll last = nums[i][1];

            while(i+1 < n && nums[i][0] == nums[i+1][0]){
                i++;
                last = nums[i][1]; // Because we sorted, 'last' will naturally be the max Y
            }
            arr.push_back({first, last});
        }
        
        // Iterative DP - Space Optimized
        // Initial state at the starting point (Ay)
        ll dp0 = 0; // Cost to end at the bottom of the current column
        ll dp1 = 0; // Cost to end at the top of the current column
        ll prev_bottom = Ay;
        ll prev_top = Ay;

        for(int i = 0; i < arr.size(); i++){
            ll curr_bottom = arr[i][0];
            ll curr_top = arr[i][1];
            ll col_dist = curr_top - curr_bottom; // Cost to walk this vertical segment

            // To end at the BOTTOM of this column, we must jump to the TOP first and walk down
            ll new_dp0 = col_dist + min(dp0 + abs(prev_bottom - curr_top), 
                                        dp1 + abs(prev_top - curr_top));
            
            // To end at the TOP of this column, we must jump to the BOTTOM first and walk up
            ll new_dp1 = col_dist + min(dp0 + abs(prev_bottom - curr_bottom), 
                                        dp1 + abs(prev_top - curr_bottom));

            // Move to the next state
            dp0 = new_dp0;
            dp1 = new_dp1;
            prev_bottom = curr_bottom;
            prev_top = curr_top;
        }

        // Finally, jump from the last processed column to the destination By
        ll final_vert_cost = min(dp0 + abs(prev_bottom - By), 
                                 dp1 + abs(prev_top - By));
        
        // Total cost = strictly fixed horizontal distance + optimized vertical distance
        ll result = abs(Ax - Bx) + final_vert_cost;
        
        cout << result << "\n";
    }
    return 0;
}