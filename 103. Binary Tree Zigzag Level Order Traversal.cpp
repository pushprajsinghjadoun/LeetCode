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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> v;
        
        if(root==NULL) return v;
        queue<TreeNode*> q;
        q.push(root);
        
        bool is=1;
        
        
        while(!q.empty()){
            int l=q.size();
            
            vector<int> level;
            for(int i=0;i<l;i++){
                TreeNode* tmp=q.front();
                q.pop();
                level.push_back(tmp->val);
                
                if(tmp->left){
                    q.push(tmp->left);
                }
                
                if(tmp->right){
                    q.push(tmp->right);
                }
                
            }
            
            if(is){
                v.push_back(level);
            }
            else{
                reverse(level.begin(),level.end());
                v.push_back(level);
            }
            is=!is;
        }
        
        return v;
    }
};