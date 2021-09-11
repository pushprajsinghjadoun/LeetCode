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
    long sum;
    void pathSum(TreeNode* root,int targetSum,long sum,vector<vector<int>>&ans,vector<int>&vec)
{
    sum=sum+root->val;
    vec.push_back(root->val);
    if(root->left==NULL&&root->right==NULL)
    {
        if(sum==targetSum)
        ans.push_back(vec);
    }
    else if(root->left==NULL)
    {
       pathSum(root->right,targetSum,sum,ans,vec); 
    }
    else if(root->right==NULL)
    {
        pathSum(root->left,targetSum,sum,ans,vec);
    }
    else
    {
        pathSum(root->left,targetSum,sum,ans,vec);
        pathSum(root->right,targetSum,sum,ans,vec);
    }
    sum=sum-root->val;
    vec.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        if(root==NULL) return v;
        sum=0;
        vector<int> t;
        pathSum(root,targetSum,sum,v,t);
        return v;
        
    }
};