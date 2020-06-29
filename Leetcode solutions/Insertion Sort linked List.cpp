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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *curr=head;
        ListNode *temp=head;
        curr=curr->next;
        while(curr!=NULL){
            temp=head;
            while(temp!=curr){
                if(temp->val > curr->val){
                    int z=temp->val;
                    temp->val=curr->val;
                    curr->val=z;
                }
                else{
                    temp=temp->next;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};
