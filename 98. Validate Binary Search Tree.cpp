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
   bool checkBST(TreeNode *root, long min, long max){
    
    if(root == nullptr){
        return true;
    }
    
    if(root->val < min or root->val > max){
        return false;
    }
    
    return checkBST(root->left, min, (long)(root->val) - 1) and checkBST(root->right, (long)(root->val) + 1, max);
}

bool isValidBST(TreeNode *root) {
    if(root->left == nullptr and root->right == nullptr){
        return true;
    }
    long min = INT_MIN;
    long max = INT_MAX;
    return checkBST(root,min,max);
}
};