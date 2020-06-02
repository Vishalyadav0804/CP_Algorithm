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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr=head;
        int z=0;
        while(head!=NULL)
        {
            z++;
            head=head->next;
        }
        int k=0;
        while(curr!=NULL)
        {
            if(k==z/2)
                return curr;
            k++;
            curr=curr->next;
        }
        return curr;
    }
};
