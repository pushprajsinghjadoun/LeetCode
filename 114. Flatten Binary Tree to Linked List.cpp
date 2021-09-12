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
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        
        TreeNode*temp1=root->left;
        TreeNode*temp2 = root->right;
        root->left=NULL;
        
        
        flatten(temp1);
        flatten(temp2);
        
        root->right = temp1;
        TreeNode*curr = root;
        while(curr->right!=NULL)
        {
            curr = curr->right;
        }
        curr->right = temp2;
        
    }
};