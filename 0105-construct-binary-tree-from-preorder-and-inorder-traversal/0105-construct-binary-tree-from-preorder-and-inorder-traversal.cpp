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
    unordered_map<int,int>m;
    int preIndx = 0;
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len = inorder.size();
        for(int i=0; i<len ; i++)
        {
            m[inorder[i]]=i;
        }
        return build(preorder,inorder,0,len-1);
    }
    
    TreeNode* build(vector<int>& pre, vector<int>& in, int start, int end)
    {
        if(start>end) return nullptr;
        
        TreeNode* r = new TreeNode(pre[preIndx++]);
        int indx = m[r->val];
        
        
        r->left = build(pre,in,start,indx-1);
        r->right = build(pre,in,indx+1,end);
        return r;
    }
};