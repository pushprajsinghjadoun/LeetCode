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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*temp1= l1;
        ListNode*temp2 = l2;
        ListNode*newhead;
        ListNode*current;
        
        if(!l1&&!l2) return l1;
        if(!l1) return l2;
        if(!l2) return l1;
       
            if(l1->val<=l2->val)
            {
                current = temp1;
                newhead = temp1;
                temp1 = temp1->next;
                
            }else if(l2->val<=l1->val)
            {
                current = temp2;
                newhead = temp2;
                temp2 = temp2->next;
            }
        
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
                current->next = temp1;
                current = current->next;
                temp1 = temp1->next;
                
            }else
            {
                current->next = temp2;
                current = current->next;
                temp2 = temp2->next;
            }
        }
         if(temp1 == NULL){
            
            while(temp2!=NULL){
                
                current->next = temp2;
                
                current = current->next;
                
                temp2 = temp2->next;

            }
            
        }
        
        if(temp2 == NULL){
            
            while(temp1!=NULL){
                
                 current->next = temp1;
                 
                 current = current->next;
                
                 temp1 = temp1->next;
            }
           
            
        }
        return newhead;
    }
};