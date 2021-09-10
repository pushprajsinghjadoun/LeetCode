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
    int b =0;

    
void printpathrec(TreeNode*root,int arr[],int length,int k)
{
    if(root==NULL)
    {
        return;
    }
    arr[length]= root->val;
    length++;
    if(root->left==NULL && root->right==NULL)
    {
        int sum=0;
        for(int i=0;i<length;i++)
       {
        sum+=arr[i];
       }   
       if(k==sum)
       {
           b=1;
           return;
       }
    }else{
        printpathrec(root->left,arr,length,k);
        printpathrec(root->right,arr,length,k);
    }
}
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int path[1000];
    printpathrec(root,path,0,targetSum);
    
        return b;
    }
};