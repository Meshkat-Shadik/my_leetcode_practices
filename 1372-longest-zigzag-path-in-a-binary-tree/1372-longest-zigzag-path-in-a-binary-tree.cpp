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
    void dfs(TreeNode* r, bool dir, int w){
        if(!r) return;
        maxx = max(maxx,w);
        if(!dir){
            dfs(r->left,false,1);
            dfs(r->right,true,w+1);
        }
        else{
            dfs(r->left,false,w+1);
            dfs(r->right,true,1);
        }
    }
    
    
    int longestZigZag(TreeNode* r) {
        dfs(r,false,0);
        dfs(r,true,0);
        return maxx;
    }
};