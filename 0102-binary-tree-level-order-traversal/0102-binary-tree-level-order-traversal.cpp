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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            int len = q.size();
            vector<int>level;
            
            for(int i=0; i<len; i++){
                TreeNode* top = q.front();
                level.push_back(top->val);
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                q.push(top->right);
                }
                q.pop();
                
            }
            res.push_back(level);
        }
        return res;
    }
};