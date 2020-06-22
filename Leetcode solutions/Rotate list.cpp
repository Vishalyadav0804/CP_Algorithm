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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        int n=1;
        ListNode *h=head;
        while(h->next!=NULL)
        {
            n++;
            h=h->next;
        }
        //cout<<n<<endl;
        k=k%n;
        if(k==0 || k==n || n==1)
            return head;
        ListNode *curr=head;
        ListNode *prev;
        for(int i=1;i<=n-k;i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode *temp=curr;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        return curr;
    }
};
