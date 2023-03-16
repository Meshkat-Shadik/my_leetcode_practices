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
    TreeNode* buildTree(vector<int>& in, vector<int>& po) {
        int len = in.size();
        for(int i=0; i<len; i++)
        {
            m[in[i]] = i;
        }
        int postIndx = len-1;
        return build(in,po,0,len-1,postIndx);
    }
    
    TreeNode* build(vector<int>& in,vector<int>& po,int start, int end, int& postIndx)
    {
        if(start>end) return nullptr;
        TreeNode* r = new TreeNode(po[postIndx--]);
        int inIndx = m[r->val];
        r->right = build(in,po,inIndx+1,end,postIndx);
        r->left = build(in,po,start,inIndx-1,postIndx);
        return r;
    }
};