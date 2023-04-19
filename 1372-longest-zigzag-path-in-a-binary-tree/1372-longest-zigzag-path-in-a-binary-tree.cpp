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
    int maxx = 0;
    void dfs(TreeNode* r, int dir, int w){
        if(!r) return;
        maxx = max(maxx,w);
        dfs(r->left,0, dir == 0 ? 1: w+1);
        dfs(r->right,1, dir == 1 ? 1 : w+1);
    }
    
    
    int longestZigZag(TreeNode* r) {
        dfs(r,0,0);
        dfs(r,1,0);
        return maxx;
    }
};