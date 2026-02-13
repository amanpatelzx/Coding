struct Node {
    int mn, mx;
};
class SegmentTree {
    int n;
    vector<Node> tree;
    vector<int> lazy;

    void push(int v) {
        if (lazy[v] != 0) {
            tree[2 * v].mn += lazy[v];
            tree[2 * v].mx += lazy[v];
            lazy[2 * v] += lazy[v];
            tree[2 * v + 1].mn += lazy[v];
            tree[2 * v + 1].mx += lazy[v];
            lazy[2 * v + 1] += lazy[v];
            lazy[v] = 0;
        }
    }

    void update(int v, int tl, int tr, int l, int r, int add) {
        if (l > r) return;
        if (l == tl && r == tr) {
            tree[v].mn += add;
            tree[v].mx += add;
            lazy[v] += add;
        } else {
            push(v);
            int tm = (tl + tr) / 2;
            update(2 * v, tl, tm, l, min(r, tm), add);
            update(2 * v + 1, tm + 1, tr, max(l, tm + 1), r, add);
            tree[v].mn = min(tree[2 * v].mn, tree[2 * v + 1].mn);
            tree[v].mx = max(tree[2 * v].mx, tree[2 * v + 1].mx);
        }
    }

    int find_first(int v, int tl, int tr, int target) {
        if (tree[v].mn > target || tree[v].mx < target) return -1;
        if (tl == tr) return tl;
        push(v);
        int tm = (tl + tr) / 2;
        int res = find_first(2 * v, tl, tm, target);
        if (res == -1) res = find_first(2 * v + 1, tm + 1, tr, target);
        return res;
    }

public:
    SegmentTree(int n) : n(n), tree(4 * n, {0, 0}), lazy(4 * n, 0) {}
    void range_add(int l, int r, int val) { update(1, 0, n - 1, l, r, val); }
    int query_first(int target) { return find_first(1, 0, n - 1, target); }
};

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        SegmentTree st(n + 1);
        unordered_map<int, int> last;
        int current_balance = 0, max_len = 0;

        for (int i = 0; i < n; ++i) {
            int val = nums[i];
            int weight = (val % 2 == 0) ? 1 : -1;
            
            if (last.count(val)) {
                st.range_add(last[val], i, -weight);
                current_balance -= weight;
            }
            st.range_add(i + 1, i + 1, current_balance + weight);
            current_balance += weight;
            last[val] = i + 1;
            int first_idx = st.query_first(current_balance);
            if (first_idx != -1) max_len = max(max_len, i + 1 - first_idx);
        }
        return max_len;
    }
};

// second solution

class Solution {
public:
    vector<int> lazy;
    vector<int> segMin;
    vector<int> segMax;
    void propagate(int i , int low , int high){
        if(lazy[i] != 0){
            segMin[i] += lazy[i];
            segMax[i] += lazy[i];

            if(low != high){//make sure its not a leaf node;
                lazy[i*2+1] += lazy[i];
                lazy[i*2+2] += lazy[i];
            }
            lazy[i] = 0;
        }
        return;
    }//here left and right is given range , and low and high means from this index we are searching that range;
    void updateRange(int i ,int low , int high , int val , int left , int right){
        propagate(i , low , high);//this means just update the lazy and pass it over to its children;
        if(low > right || high < left) return;
        if(low >= left && high <= right){
            lazy[i] += val;
            propagate(i , low , high);
            return;
        }
        int mid = (low+high) / 2;
        updateRange(i*2+1 , low , mid, val , left ,right);
        updateRange(i*2+2 , mid+1 , high, val , left ,right);
        segMin[i] = min(segMin[2*i+1] , segMin[2*i+2]);
        segMax[i] = max(segMax[2*i+1] , segMax[2*i+2]);
    }
    int findLeftMostZero(int i , int low , int high){
        propagate(i , low , high);
        if(segMin[i] > 0 || segMax[i] < 0) return -1;
        if( low == high) return low;
        int mid = (low + high) / 2;
        int temp = findLeftMostZero(i*2+1 , low , mid);
        if(temp != -1) return temp; 
        return findLeftMostZero(2*i+2 , mid+1 , high);
    }
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        lazy.resize(4*n , 0);
        segMin.resize(4*n , 0);//this min & max tell us range where we can get zero
        segMax.resize(4*n , 0);//to understand this , first do check its part 1 solution deeply
        //then u will realize why we using min and max segment tree;
        unordered_map<int, int> mp;// if any element repeat;
        int maxAns = 0;//its store max ans;
        for(int r = 0; r < n; r++){
            int val = (nums[r] % 2 == 0) ? 1 : -1;//for odd = -1 , even = +1
            
            if(mp.count(nums[r])){
                updateRange( 0 , 0 , n-1 , -val , 0 , mp[nums[r]]);
            }
            updateRange( 0 , 0 , n-1 , val , 0 , r);
            int idx = findLeftMostZero(0 , 0 , n-1);
            if(idx != -1) maxAns = max(maxAns , r - idx + 1);
            mp[nums[r]] = r;
        }
        return maxAns;
    }
};
