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
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
    int sum(TreeNode* node, int s)
    {
        if(node == nullptr) return 0;
        if(node->left == nullptr && node->right == nullptr)
        {
            return s*10+node->val;
        }
        return sum(node->left,s*10+node->val) + sum(node->right,s*10+node->val);
    }
};