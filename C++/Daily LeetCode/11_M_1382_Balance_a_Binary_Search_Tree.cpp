/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> nums;
    void f(TreeNode* root){
        if(!root) return;
        f(root->left);
        nums.push_back(root);
        f(root->right);
    }
    TreeNode* f2(int i , int j){
        if(i > j) return NULL;
        int node = i + (j - i) / 2;
        TreeNode* root = nums[node];
        root->left = f2(i , node-1);
        root->right = f2(node+1 , j);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        f(root);
        return f2(0 , nums.size()-1);
    }
};