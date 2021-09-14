/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* f(vector<int>num,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode*root = new TreeNode(num[mid]);
        root->left = f(num,s,mid-1);
        root->right = f(num,mid+1,e);
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>num;
        while(head!=NULL)
        {
            num.push_back(head->val);
            head = head->next;
        }
        TreeNode*curr = f(num,0,num.size()-1);
        return curr;
    }
};