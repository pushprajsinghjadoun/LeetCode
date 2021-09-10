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
    vector<string> v;
    string t="";
    void printrec(TreeNode*root,string t)
    {
        if(root==NULL) return;
         t += to_string(root->val);
        
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(t);
           
            
            t="";
        }else
        {
            t+="->";
            printrec(root->left,t);
            printrec(root->right,t);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        printrec(root,t);
        return v;
    }
};