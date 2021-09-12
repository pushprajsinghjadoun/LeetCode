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
    int sum=0;
    int summ(TreeNode*root,int n)
    {
        if(root==NULL)
        {
            return 0;
        }
         
        n= n*10 + root->val;
        if(root->left==NULL && root->right==NULL)
        {
             sum= sum+ n;
        }
        summ(root->left,n);
        summ(root->right,n);
        return sum;
    }
    
    int sumNumbers(TreeNode* root) {
        
       int long long n=0;
        return summ(root,n);
    }
};