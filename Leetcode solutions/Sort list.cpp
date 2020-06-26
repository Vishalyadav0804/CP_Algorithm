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
    ListNode* sortList(ListNode* head) {
       vector<int> v;
        ListNode *newhead=head;
        while(newhead!=NULL){
            v.push_back(newhead->val);
            newhead=newhead->next;
        }
        sort(v.begin(),v.end());
        ListNode *dummy=new ListNode(0),*curr=dummy;
        for(int i=0;i<v.size();i++){
            curr->next=new ListNode(v[i]);
            curr=curr->next;
            cout<<v[i]<<" ";
        }
        curr=dummy->next;
        delete dummy;
        return curr;
        //return head;
    }
};
