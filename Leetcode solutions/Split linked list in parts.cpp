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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        if(k==0) return {root};
        vector<ListNode*> result;
        if(root==NULL) return vector<ListNode*> (k,NULL);
        ListNode *curr=root;
        int n=0;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        int extra_elems=n%k;
        int bucket=n/k;
        curr=root;
        ListNode *prev=NULL;
        while(curr!=NULL){
            result.push_back(curr);
            int count=0;
            while(count<bucket){
                prev=curr;
                curr=curr->next;
                count++;
            }
            if(extra_elems!=0){
                prev=curr;
                curr=curr->next;
                extra_elems--;
            }
            prev->next=NULL;
        }
        while(result.size()<k){
            result.push_back(NULL);
        }
        return result;
    }
};
