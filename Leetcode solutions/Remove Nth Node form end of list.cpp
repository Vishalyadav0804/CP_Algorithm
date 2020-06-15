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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *c=head;
        int k=1,z=0;
        while(c->next!=NULL)
        {
            k++;
            c=c->next;
        }
        if(k==1 && n==1)
            return NULL;
        //cout<<k;
        ListNode *curr=head;
        if(z<=k-n-1)
        {
            while(z<k-n-1 && curr->next!=NULL)
            {
                z++;
                //cout<<curr->val<<" ";
                curr=curr->next;
            }
            curr->next=curr->next->next;
            return head;
        }
        if(z>k-n-1)
        {
            head=head->next;
            return head;
        }
        return head;
    }
};
