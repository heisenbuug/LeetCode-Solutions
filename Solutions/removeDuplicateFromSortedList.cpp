/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        ListNode *p = head;
        ListNode *q = head -> next;
        
        while(q != NULL)
        {
            if(p->val != q->val)
            {
                p = q;
                q = q -> next;
            }
            else
            {
                p -> next = q -> next;
                delete q;
                q = p -> next;
            }
        }
        return head;
    }
};
