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
    
    void f(TreeNode*root,int&c,int l)
    {
        if(root->left==NULL &&root->right==NULL)
        {
            if(l==0)
            {
                c+=root->val;
            }
            return;
        }
        if(root->left)
        {
            f(root->left,c,0);
        }
        if(root->right)
        {
            f(root->right,c,1);
        }
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL&& root->right==NULL) return 0;
        int c=0;
        if(root->left)
        {
            f(root->left,c,0);
        }
        if(root->right)
        {
            f(root->right,c,1);
        }
        return c;
        
    }
};