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
    ListNode *mergeList(ListNode *a,ListNode *b)
    {
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        ListNode *c=NULL;
        if(a->val<=b->val){
            c=a;
            c->next=mergeList(a->next,b);
        }
        else if(a->val>b->val){
            c=b;
            c->next=mergeList(a,b->next);
        }
        return c;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *a=NULL;
        ListNode *b=NULL;
        for(int i=0;i<lists.size();i++)
        {
            b=lists[i];
            a=mergeList(a,b);
        }
        return a;
    }
};
