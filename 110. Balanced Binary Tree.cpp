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
    int f = 1;
    int check(TreeNode*root)
    {
        if(!root) return 0;
        int l = check(root->left);
        int r = check(root->right);
        if(abs(l-r)>1) f = 0;
        return max(l,r)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        
        check(root);
        return f;
    }
};