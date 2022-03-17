class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*s=head;
        ListNode*f = head;
        while(f!=NULL&&f->next!=NULL)
        {
            f=f->next->next;
            s = s->next;
        }
        ListNode*prev=NULL;
        ListNode*nex;
        
        while(s!=NULL)
        {
            
            nex = s->next;
            s->next =prev;
            prev = s;
            s = nex;
        }
        ListNode* j = prev;
        ListNode* i = head;
        while(j!=NULL)
        {
            if(j->val!=i->val) return false;
            i = i->next;
            j = j->next;
        }
        return true;
    }
};