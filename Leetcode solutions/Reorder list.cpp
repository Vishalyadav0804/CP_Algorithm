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
    ListNode* reverse(ListNode *dummy_head){
        ListNode *prev=NULL;
        ListNode *curr=dummy_head;
        ListNode *n;
        while(curr!=NULL){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        dummy_head=prev;
        return dummy_head;
    }
    void reorderList(ListNode* head) {
        if(head==NULL) 
            return;
        ListNode *dummy_head;
        ListNode *temp=head;
        int cnt=0,s,k=1;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt%2==0){
            s=cnt/2;
        }else{
            s=(cnt+1)/2;
        }
        temp=head;
        while(k!=s){
            temp=temp->next;
            k++;
        }
        dummy_head=temp->next;
        temp->next=NULL;
        ListNode *rev=reverse(dummy_head);
        temp=head;
        ListNode* h1 = temp, *h2 = rev, *p1, *p2;
        while(h1 && h2){
            p1 = h1->next;
            p2 = h2->next;
            h1->next = h2;
            h2->next = p1;
            h1 = p1;
            h2 = p2;
        }
        
    }
};
