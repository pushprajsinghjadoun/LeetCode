class Solution {
public:
    unordered_map<int, int> mp;
    int preInd = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int lw, int hh) {
        if(lw > hh) return nullptr;
        TreeNode* root = new TreeNode(preorder[preInd++]);
        int fit = mp[root->val];
        root->left = buildTree(preorder, inorder, lw, fit - 1);
        root->right = buildTree(preorder, inorder, fit + 1, hh);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //map of inorder 
        int n = inorder.size();
        for(int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }
        return buildTree(preorder, inorder, 0, n - 1);
    }
};