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
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head;
        ListNode *curr=head;
        while(curr!=NULL){
            if(curr->val==prev->val){
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        return head;
    }
};
