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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans = -1, maxx = INT_MIN, level = 0;
        while(!q.empty()){
            int len = q.size();
            level++;
            int sum = 0;
            for(int i=0;i<len;i++){
                TreeNode* top = q.front();
                q.pop();
                
                sum = sum + top->val;
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
            }
                if(sum>maxx){
                    maxx = sum;
                    ans = level;
                }
        }
        return ans;
    }
};