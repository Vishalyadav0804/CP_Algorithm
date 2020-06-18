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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL){
            return head;
        }
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(m>1){
            prev=curr;
            curr=curr->next;
            m--;
            n--;
        }
        ListNode *connection=prev;
        ListNode *tail=curr;
        while(n>0){
            ListNode *next_node=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_node;
            n--;
        }
        if(connection!=NULL){
            connection->next=prev;
        }else{
            head=prev;
        }
        tail->next=curr;
        return head;
    }
};
