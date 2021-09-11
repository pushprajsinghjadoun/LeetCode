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
    vector<vector<int>> r;
    vector<int> t;
   void level(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
       queue<TreeNode*> q;
       q.push(root);
       q.push(NULL);
       
       while(!q.empty())
       {
           TreeNode*temp = q.front();
           q.pop();
           if(temp!=NULL)
           {
               cout<<temp->val<<" ";
               t.push_back(temp->val);
               if(temp->left)
               {
                   q.push(temp->left);
               }
               if(temp->right)
               {
                   q.push(temp->right);
               }
           }else if(!q.empty())
           {
               r.push_back(t);
               t.clear();
               q.push(NULL);
           }
           
       }
       r.push_back(t);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        level(root);
        reverse(r.begin(),r.end());
        return r;
    }
};